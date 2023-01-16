
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tipoProduto {
	char nome[25];
	int posicao[10];
	
}TProduto;

typedef struct tipoVenda { // vendi? 1 ; nao vendi 0
	int produtos[10];
	tipoVenda *ante;
	tipoVenda *prox;
	tipoVenda *fim;
	tipoVenda *inicio;
}TVenda;

typedef struct tipoLista{
	TProduto produto[10];
	TVenda *vendaInicial;
	double suporteMinimo;
	double confiancaMinima;
}TLista;

TLista lista; 

//Assinatura

void inicializa(TLista *L);
void inserirVenda(TLista *L);

//Corpo do programa
int main(){
	int menu();
	inicializa(&lista);
	void inserirVenda(&lista);
	
	return 0;
}

void inicializa(TLista *L){
	int i;
	
	i=10;
	
	L->vendaInicial = NULL;
	L->suporteMinimo = 50; //porcentagem
	L->confiancaMinima = 75; //porcentagem
	L->produto->posicao = 0;
	
	for(i=0; i<10; i++){
			printf("\nDigite o nome do produto:\n");
			fflush(L->produto[i].nome);
			gets(L->produto[i].nome);	
			
			L->vendaInicial[i].produtos = L->produto[i].posicao;
	}
	
}

int menu(){
	
	//O usuario sera obrigado a inserir 10 produtos no comeco do programa
	int opcao;
	system("CLS");
	printf("\n\n\t\t=====| MENU |=====\n\n");
	
	printf("\t0 - Sair (Encerrar).\n\n");
	printf("\t2 - Listar Produtos.\n");
	printf("\t3 - Excluir Produto.\n");
	
	printf("\t\tInforme a opcao desejada:");
	scanf("%d", &opcao);
	
	if((opcao > 4) || (opcao < 0)){
		printf("\n\n\tERRO: opcao invalida.\n\tTente outra vez.\n\n");
		system("PAUSE");
	}//if
	return opcao;
	
	
}

void inserirVenda(TLista *L){
	int i, produto;
	int inserido = 0;
	TVenda *anterior;
	
	TLista *nome = (TLista *)malloc(sizeof(TLista));
	TVenda *atual = L->vendaInicial->inicio;
	TLista *novo = (TLista *)malloc(sizeof(TLista));
	
	L->vendaInicial->ante = NULL;
	
	
	printf("\n\n\t\t=====| INSERIR VENDA |=====\n\n\n");
	printf("Digite o id do produto: ");
	scanf("%d", &produto);
	printf("\nDigite o nome do produto selecionado: ");
	fflush(stdin);
	gets(nome);
	
	
	novo->vendaInicial->ante = NULL;
//	novo->vendaInicial->prox = NULL;
	
	//INSERIR VENDA RELACIONANDO DOIS PRODUTOS
	for(i=0; i<10; i++){ //10 produtos 
		if(strcmp(nome, L->produto[i].nome) == 0 && produto == L->produto[i].posicao){
			printf("\n\t\tProduto Encontrado!");
			if(L->vendaInicial == NULL){
				novo->vendaInicial->inicio = nome;
				novo->vendaInicial->fim = nome;
			}
			else{
				while(atual != NULL){
					inserido = 1;
					L->vendaInicial->prox = atual;
					anterior = atual->ante;
					
					if(anterior == NULL){
						novo->vendaInicial->ante = nome;
					}
					else{
						anterior->prox = nome;
					}
					
					novo->vendaInicial->ante = anterior;
					atual->ante = nome;
					break; //para o while
				}
				atual = atual->prox;
			}
			if(!inserido){ //verificar
   	   			//Inserir Novo no Final da Lista...
   	   	  		L->vendaInicial->prox = novo;
   	   	  		novo->vendaInicial->ante = L->vendaInicial->fim;
   	   	  		L->vendaInicial->fim = novo;
	   		}
		}
		else{
			printf("\n\t\tProduto nao Encontrado!");
		}
	}
}
/*
void mostrarLista(TLista *L){
	
	
	
	
}*/
