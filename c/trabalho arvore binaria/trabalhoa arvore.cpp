/*
Faça um programa em linguagem C que permita a manutenção de uma lista duplamente encadeada de filmes e, em paralelo, uma árvore binária de busca.

A Lista duplamente encadeada deverá conter os seguintes campos:

    Título do Filme,
    Ano de produção,
    Bilheteria,
    Ante e
    Prox

A árvore binária de busca conterá os seguintes campos:

    Esq,
    Título do Filme,
    ponteiro para o struct de Filme da lista encadeada e 
    Dir.

O programa terá um menu com as seguintes opções:

0 - Sair (Encerrar Aplicação).

1 - Inserir Filme.

2 - Listar filmes por ordem alfabética de título (usando primordialmente a árvore como um índice).

3 - Excluir filme.

4 - Buscar Filme por Título (usando inicialmente a árvore como índice).

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct tipoFilme{
	char titulo[25];
	int id;
	int ano;
	int bilheteria; //quantidade vendida de ingresso
	tipoFilme *ante;
	tipoFilme *prox;

}TFilme;

typedef struct tipoNo{ 
	tipoNo *esq;
	tipoNo *dir;
	char titulo[25];
	TFilme *ponteiro;
	
}TNo;

typedef struct tipoLista{
	TFilme *inicio;
	TFilme *fim;
	TNo *raiz;
	int total;
}TLista;

TFilme filme;
TLista lista;
TNo tno;

//=============Assinatura das funções=====================
void inicializa(TLista *L, TNo *F);
TNo insereArvore(TNo **N, char tituloNovo[25]);
TNo *criaNo(char titulo[25]);
int menu();
void inserir(TLista *L);
void listar(TLista *L);
TNo *remove(TNo *nodo, char valorNovo[25]);
void buscaValor(TNo *nodo, char procurado[25]);
void busca(TNo *nodo, char procurado[25]);


void inicializa(TLista *L, TNo *F){
	L->inicio = NULL;
	L->fim = NULL;
	L->total = 0;
	
	L->raiz = NULL;
	L->raiz->dir = NULL;
	L->raiz->esq = NULL;
}


int menu(){
	int opcao;
	
	system("CLS");
	printf("\n\n\t\t=====| MENU |=====\n\n");
	
	printf("\t0 - Sair (Encerrar).\n\n");
	printf("\t1 - Inserir Filme.\n");
	printf("\t2 - Listar Filmes em Ordem Alfabetica.\n");
	printf("\t3 - Excluir Filmes.\n");
	printf("\t4 - Buscar Filmes por Título.\n");
	
	printf("\t\tInforme a opcao desejada:");
	scanf("%d", &opcao);

	if((opcao > 4) || (opcao < 0)){
		printf("\n\n\tERRO: opcao invalida.\n\tTente outra vez.\n\n");
		system("PAUSE");
	}//if
	return opcao;
}


int main(){
	int opcao, resposta;
	inicializa(&lista, &tno);
	char titulo[25];
	
	do {
		opcao = menu();
	
		switch(opcao){
			case 1: inserir(&lista); break;
			case 2: listar(&lista); break;
			case 3: 
				printf("Digite o titulo a ser excluido: ");
			 	gets(titulo);
				
				remove(&tno, titulo);
				if(resposta == 0){
					printf("\n\nERRO: Exclusao Falhou!\n\n");
				}else {
					printf("\n\nExclusao bem sucedida!\n\n");
				}
				system("PAUSE");
				break;
			case 4: 
				printf("Digite o titulo a ser procurado: ");
				gets(titulo);
				
				buscaValor(&tno, titulo);
				
				break;
		}
	}while(opcao!= 0);

}

// =================================FUNCOES PARA A ARVORE==================================
TNo *criaNo(char titulo[25]){
	TLista *novo = (TLista *)malloc(sizeof(TLista));
	strcpy(novo->raiz->titulo, titulo);
	novo->raiz->esq = NULL;
	novo->raiz->dir = NULL;
	return novo->raiz;
}

TNo insereArvore(TNo **N, char tituloNovo[25]){
	TLista **L = (TLista **)malloc(sizeof(TLista *));	
	
	if((*L)->raiz == NULL){
		(*L)->raiz = criaNo(tituloNovo);
	}
	else if(strcmp(tituloNovo, (*L)->raiz->titulo) == -1){
		(*L)->raiz->esq = insereArvore(&(*L)->raiz->esq, tituloNovo);
	}	
	else{
		(*L)->raiz->dir = insereArvore(&(*L)->raiz->dir, tituloNovo);
	}
	return (*L)->raiz;
	
}
// =====================================================================================

void inserir(TLista *L){
   TFilme *novo = (TFilme *)malloc(sizeof(TFilme));
   TFilme *atual = L->inicio;
   TFilme *anterior;
   int inserido = 0;
   
   printf("\n\tTITULO: ");
   fflush(stdin);
   gets(novo->titulo);
   
   printf("\n\tANO DE PRODUCAO: ");
   scanf("%d",&novo->ano);
   
   	printf("\n\t BILHETERIA: ");
	scanf("%d", &novo->bilheteria);
   
   novo->ante = NULL;
   novo->prox = NULL;
   
   insereArvore(&(*L)->raiz, novo->titulo);
   
   if(L->inicio == NULL){
   		//Lista está vazia...
   		L->inicio = novo;
   		L->fim = novo;
   } else {
   	   while(atual != NULL){
   	       if(strcmp(atual->titulo, novo->titulo) == 1)	{
   	          //Inserir novo antes de atual ...
		      inserido = 1;
			  novo->prox = atual;
			  anterior = atual->ante;
			  
			  if(anterior == NULL){
			  	 L->inicio = novo;
			  }else{
			     anterior->prox = novo; 	
			  }//if
			  
			  novo->ante = anterior;
			  atual->ante = novo;
			  break; //interrompe o while	
	       }//if
	       atual = atual->prox; //move atual para o próximo filme.
	   }//while
   	   
   	   if(!inserido){
   	   	  //Inserir Novo no Final da Lista...
   	   	  L->fim->prox = novo;
   	   	  novo->ante = L->fim;
   	   	  L->fim = novo;
	   }//if
   }//if
   
   L->total++;
}

void listar(TNo *N){
	TLista *L = (TLista *)malloc(sizeof(TLista));	

	if(L->raiz != NULL){
		listar(L->raiz->esq);
		printf("\n\t(%s).", L->raiz->titulo);
		listar(L->raiz->dir);
}
	
TNo *remove(TNo *nodo, char valorNovo[25]){
	if(novo == NULL){
		return NULL;
		
	}else if{
		nodo->esq = remove(nodo->esq, valorNovo);
	}
	else if strcmp((nodo->titulo, valorNovo) == 1);
		nodo->dir = remove(nodo->dir, valorNovo);
	else{
		if(nodo->dir == NULL && nodo->esq == NULL){
			free(nodo);
			nodo = NULL;
		}else if(nodo->esq == NULL){
			TNo *temporario = nodo;
			nodo = nodo->dir;
			free(temporario);
		}else if(nodo->dir == NULL){
			TNo *temporario = nodo;
			nodo = nodo->esq;
			free(temporario);
		}else{
			TNo *prov = nodo->esq;
			while (prov->dir != NULL){
				prov = prov->dir;
			}
			strcpy(nodo->titulo, prov->titulo);
			strcpy(prov->titulo, valorNovo);
			
			nodo->esq = remove(nodo->esq, valorNovo);
		}
	}
	return nodo;
}

void buscaValor(TNo *nodo, char procurado[25]){
	if(nodo == NULL){
		printf("\n\n\tArvore VAZIA ... Impossivel iniciar busca de %s.\n\n", procurado);
		
	}else{
		printf("\n\n\tIniciando BUSCA pelo valor %d", procurado);
		printf("\n\n\tVisitando a RAIZ (%d) \n", nodo->titulo);
		busca(nodo, procurado);
	}
	system("PAUSE");
}

void busca(TNo *nodo, char procurado[25]){
	if(nodo == NULL){
		printf("\n<< VALOR INEXISTENTE NA ARVORE >>\n\n\n");
	}else if(strcmp(nodo->titulo, procurado) == 0){
		printf("\n<<ENCONTRADO>>\n\n\n");
	}else if(strcmp(nodo->titulo, procurado) == 1){
		printf("\nPROCURADO: %s\tVISITADO: %s", procurado, nodo->titulo);
		printf("\n\n... Descendo pela Sub-Arvore ESQUERDA.");
		busca(nodo->esq, procurado);
	}else{
		printf("\nPROCURADO:  %s\tVISITADO: %s", procurado, nodo->titulo);
		printf("\n\n... Descendo pela Sub-Arvore DIREITA");
		busca(nodo->dir, procurado);
	}
}

