#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define TAMANHO 20

typedef char string[21];

typedef struct structNomes{
		string nomes;
		int amigos[20];
		
}TstructNomes;


void inicio(TstructNomes *t){ //printar 
	
	strcpy(t->nomes[0], "Claudia"); 
	strcpy(t->nomes[1], "Cinthia"); 
	strcpy(t->nomes[2], "Ronaldo");
	strcpy(t->nomes[3], "Eduardo");
	strcpy(t->nomes[4], "Berg");
	strcpy(t->nomes[5], "Rosa");
	strcpy(t->nomes[6], "Raquel");
	strcpy(t->nomes[7], "Paula");
	strcpy(t->nomes[8], "Lina");
	strcpy(t->nomes[9], "Cibele");
	strcpy(t->nomes[10], "Rita");
	strcpy(t->nomes[11], "Thais");
	strcpy(t->nomes[12], "Andreia");
	strcpy(t->nomes[13], "Ludimila");
	strcpy(t->nomes[14], "Adriane");
	strcpy(t->nomes[15], "Fabricia");
	strcpy(t->nomes[16], "Magalhaes");
	strcpy(t->nomes[17], "Tito");
	strcpy(t->nomes[18], "Mauricio");
	strcpy(t->nomes[19], "Humberto");
	strcpy(t->nomes[20], "Marcio");


	t->amigos[0][1] = 1; // Cláudia e Cínthia
	t->amigos[0][6] = 1; // Cláudia e Raquel
	t->amigos[2][3] = 1; // Ronaldo e Eduardo
	t->amigos[2][4] = 1; // Ronaldo e Berg
	t->amigos[2][5] = 1; // Ronaldo e Rosa
	t->amigos[2][6] = 1; // Ronaldo e Raquel
	t->amigos[5][6] = 1; // Rosa e Raquel
	t->amigos[1][6] = 1; // Cínthia e Raquel
	t->amigos[3][7] = 1; // Eduardo e Paula
	t->amigos[7][0] = 1; // Paula e Cláudia
	t->amigos[7][8] = 1; // Paula e Lina
	t->amigos[8][9] = 1; // Lina e Cibele
	t->amigos[8][10] = 1; // Lina e Rita
	t->amigos[8][5] = 1; // Lina e Rosa
	t->amigos[8][6] = 1; // Lina e Raquel
	t->amigos[11][5] = 1; // Thaís e Rosa
	t->amigos[11][12] = 1; // Thaís e Andreia
	t->amigos[12][13] = 1; // Andreia e Ludimila
	t->amigos[13][5] = 1; // Ludimila e Rosa
	t->amigos[15][14] = 1; // Fabrícia e Adriane
	t->amigos[15][16] = 1; // Fabrícia e Magalhães
	t->amigos[15][17] = 1; // Fabrícia e Tito
	t->amigos[16][17] = 1; // Magalhães e Tito
	t->amigos[16][18] = 1; // Magalhães e Maurício
	t->amigos[18][19] = 1; // Maurício e humberto
	t->amigos[18][20] = 1; // Maurício e Márcio
	t->amigos[18][14] = 1; // Maurício e Adriane

};

/*
void encontrarPosicao(TstructNomes *t){
	string nome;
	int i, j; 
	
	printf("\nDigite a pessoa na qual voce gostaria de saber seus amigos: ");
	fgets(nome, TAMANHO, stdin);
	
	for(i= 0; i<= 20; i++){
		if(strcmp(nome, t[i].nomes) == 0){
			for(j =0; j<=TAMANHO; j++){
				printf("O %s e amigo de %s", nome, t[j].nomes);
			}
		}
	}
};
*/
void quemMaisTemAmigo(TstructNomes *t){ //sao os 5 mais
	int i, j, m, n, contador = 0, r = 0;
	
	int posicoes[5] = {0,0,0,0,0};
	char pessoa[5][TAMANHO];
	
	for(i=0;i<TAMANHO;i++){
		for(j=0;j<TAMANHO;j++){
			if(t->amigos[i][j] == 1){
				contador++;
			}
		}
		if(contador > posicoes[r]){
			for(m = 4; m = 2; m--){
				for(n = 3; n = 1; n--){
					posicoes[r+m] = posicoes[r+n];
					strcpy(pessoa[r+m], pessoa[r+n]);
				}
			posicoes[r+1] = posicoes[r];
			posicoes[r] = contador;	
			strcpy(pessoa[r+1], pessoa[r]);
			strcpy(pessoa[r], t->nomes[i]);
			}
		}
		
		else if(contador > posicoes[r+1]){
			for(m=4; m=2; m--){
				for(n=3; n=1; n--){
					posicoes[r+m] = posicoes[r+n];
					strcpy(pessoa[r+m], pessoa[r+n]);
				}
				posicoes[r+1] = contador;
				strcpy(pessoa[r+1], pessoa[r]);
				strcpy(pessoa[r], t->nomes[i]);				
			}
		}
		
		else if(contador> posicoes[r+2]){
			for(m=4; m=3; m--){
				for(n=3;n=2; n--){
					posicoes[r+m] = posicoes[r+n];
					strpcy(pessoa[r+m], pessoa[r+n]);
				}
			posicoes[r+2] = contador;
			strcpy(pessoa[r+2], t->nomes[i]);	
			}		
		}
		
		else if(contador>posicoes[r+3]){
			posicoes[r+4] = posicoes[r+3];
			posicoes[r+3] = contador;
			strcpy(pessoa[r+4], pessoa[r+3]);
			strcpy(pessoa[r+3], t->nomes[i]);
			
		}
		
		else if(contador>posicoes[r+4]){
			posicoes[r+4] = contador;
			strpcy(pessoa[r+4], t->nomes[i]);
		}
		contador = 0;
	}
	printf("\n\nAs pessoas com mais amigos sao: \n");
	for(i=0; i<5; i++){
		printf("%s\n", pessoa[i]);
	}
	system("PAUSE"); //faz com que o programa nao pare, volte para o menu
}

void quemMenosTemAmigo(TstructNomes *t){
	int i, j, m, n, contador = 0, r =0;
	
	int posicoes[3] = {0,0,0};
	char pessoa[3][TAMANHO]; //variavel para guardar os nomes das pessoas que menos tiverem amizades
	
	for(i=0; i<TAMANHO; i++){ //quem tem amigo ao contrario
		for(j=0; j< TAMANHO; j++){
			if(t->amigos[i][j] == 0) //quem nao tiver amigo
				contador++;
		}
		
		if(contador > posicoes[r]){ //se tiver alguem com menos amizades 
			posicoes[r+2] = posicoes[r+1];
			posicoes[r+1] = posicoes[r];
			posicoes[r] = contador;
			strcpy(pessoa[r+2], pessoa[r+1]);
			strcpy(pessoa[r+1], pessoa[r]);
			strcpy(pessoa[r], t->nomes[r])
		}
		
		if(contador> posicoes[r+1]){
			posicoes[r+2] = posicoes[r+1];
			posicoes[r+1] = contador;
			strcpy(pessoa[r+2], pessoa[r+1]);
			strcpy(pessoa[r+1], t->nomes[r]);
		}
		else if(contador>posicoes[r+2]){
			posicoes[r+2] = contador;
			strcpy(pessoa[r+2], t->nomes[r]);	
		}
		contador = 0; //zera o contador
		
	}
	
	printf("\n\nAs pessoas que menos possuem amizades sao: \n");
	for(i=0; i<3; i++){
		printf("%s\n", pessoa[i]);
	}
	system("PAUSE"); //faz com que o programa nao pare, volte para o menu
}

void sugestao(TstructNomes *t){
	int i, j, k;
	
	for(i = 0; i<TAMANHO; i++){
		for(j=0; j<TAMANHO; j++){
			if(t->amigos[i][j] == 1){
				for(k=0; k<TAMANHO; k++){
					if(t->amigos[j][k] == 1 && i != k){
						printf("\n\n%s tera a sugestao de amizade de %s pois ambos sao amigos de %s\n\n", t->nomes[i], t->nomes[k], t->nomes[j]);
					}
				}
			}
		}
	}
	system("PAUSE"); //faz com que o programa nao pare, volte para o menu
}

char encontraAmigos(TstructNomes *t){
	int i, j;
	string pessoa;
	
	printf("\nDigite o nome da pessoa com o qual deseja saber seus amigos: ");
	scanf("%s", &pessoa);
	
	for(i=0; i<TAMANHO; i++){
		for(j=0; j<TAMANHO; j++){
			if(strcmp(t->nomes[i], strupr(pessoa)) == 0){ //strupr deixa tudo maiusculo
				if(t->amigos[i][j] == 1){
					printf("%s possui amizade com %s\n", t->nomes[i], t->nomes[j]);
				}
				else{
					printf("Esse usuario nao existe nesta rede social");
				}
			} 
		}
	}
	system("PAUSE");	
}
	
void menuInicializar(TstructNomes *t){
	int digitoUsuario;
	
	printf("="*50);
	printf("Bem vindo!");
	printf("="*50);
	
	printf("Selecione a opcao desejada: \n");
	printf("1 - Ver os amigos de um usuario\n");
	printf("2 - Os 5 usuarios mais bem relacionados\n");
	printf("3 - Os 3 usuarios mais solitarios\n");
	printf("4 - A sugestao de novos amigos para todos os membros da rede social\n\n");
	printf("="*50);
	
	
	scanf("Digite: %i", &digitoUsuario);
	
	if(digitoUsuario == 1){
		encontraAmigos(TstructNomes *t);
		break;
	}
	else if(digitoUsuario == 2){
		quemMaisTemAmigo(TstructNomes *t);
		break;
	}
	else if(digitoUsuario == 3){
		quemMenosTemAmigo(TstructNomes *t);
		break;
	}
	else if(digitoUsuario == 4){
		sugestao(TstructNomes *t);
		break;
	}
	
}


int main() {
	TstructNomes *t = (TstructNomes *)calloc(TAMANHO, sizeof(TstructNomes));
	inicio(t);
	menuInicializar(t);
	
	return 0;
}
