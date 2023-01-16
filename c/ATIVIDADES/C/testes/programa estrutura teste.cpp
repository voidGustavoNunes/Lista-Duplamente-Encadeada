#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAMANHO 21

typedef char string[50];

typedef struct structNomes{
	string nomes[21];
	int amigos[21][21];
		
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
	
	int l, c;
	for(l = 0; l < TAMANHO; l++)
        for(c = 0; c < TAMANHO; c++)
        	t->amigos[l][c] = 0;

	t->amigos[0][1] = 1; // Cláudia e Cínthia
	t->amigos[0][6] = 1; // Cláudia e Raquel
	t->amigos[0][7] = 1; // Cláudia e Paula
	
	t->amigos[1][0] = 1; // Cínthia e Cláudia
	t->amigos[1][6] = 1; // Cínthia e Raquel
	
	t->amigos[2][3] = 1; // Ronaldo e Eduardo
	t->amigos[2][4] = 1; // Ronaldo e Berg
	t->amigos[2][5] = 1; // Ronaldo e Rosa
	t->amigos[2][6] = 1; // Ronaldo e Raquel
	
	t->amigos[3][2] = 1; // Eduardo e Ronaldo
	t->amigos[3][7] = 1; // Eduardo e Paula
	
	t->amigos[4][2] = 1; // Berg e Ronaldo
	
	t->amigos[5][2] = 1; // Rosa e Ronaldo
	t->amigos[5][6] = 1; // Rosa e Raquel
	t->amigos[5][8] = 1; // Rosa e Lina
	t->amigos[5][11] = 1; // Rosa e Thaís
	t->amigos[5][13] = 1; // Rosa e Ludimila
	
	t->amigos[6][0] = 1; // Raquel e Cláudia
	t->amigos[6][1] = 1; // Raquel e Cínthia
	t->amigos[6][2] = 1; // Raquel e Ronaldo
	t->amigos[6][5] = 1; // Raquel e Rosa
	t->amigos[6][8] = 1; // Raquel e Lina
	
	t->amigos[7][0] = 1; // Paula e Cláudia
	t->amigos[7][3] = 1; // Paula e Eduardo
	t->amigos[7][8] = 1; // Paula e Lina
	
	t->amigos[8][5] = 1; // Lina e Rosa
	t->amigos[8][6] = 1; // Lina e Raquel
	t->amigos[8][9] = 1; // Lina e Cibele
	t->amigos[8][10] = 1; // Lina e Rita
	
	t->amigos[9][8] = 1; // Cibele e Lina

	t->amigos[10][8] = 1; // Rita e Lina
	
	t->amigos[11][5] = 1; // Thaís e Rosa
	t->amigos[11][12] = 1; // Thaís e Andreia
	
	t->amigos[12][11] = 1; // Andreia e Thaís
	t->amigos[12][13] = 1; // Andreia e Ludimila
	
	t->amigos[13][5] = 1; // Ludimila e Rosa
	t->amigos[13][12] = 1; // Ludimila e Andreia
	
	t->amigos[14][15] = 1; // Adriane e Fabrícia
	t->amigos[14][18] = 1; // Adriane e Maurício
	
	t->amigos[15][14] = 1; // Fabrícia e Adriane
	t->amigos[15][16] = 1; // Fabrícia e Magalhães
	t->amigos[15][17] = 1; // Fabrícia e Tito
	
	t->amigos[16][15] = 1; // Magalhães e Fabrícia
	t->amigos[16][17] = 1; // Magalhães e Tito
	t->amigos[16][18] = 1; // Magalhães e Maurício

	t->amigos[17][15] = 1; // Tito e Fabrícia
	t->amigos[17][16] = 1; // Tito e Magalhães
	
	t->amigos[18][14] = 1; // Maurício e Adriane
	t->amigos[18][16] = 1; // Maurício e Magalhães
	t->amigos[18][19] = 1; // Maurício e Humberto
	t->amigos[18][20] = 1; // Maurício e Márcio

	t->amigos[19][18] = 1; // Humberto e Maurício
	
	t->amigos[20][18] = 1; // Márcio e Maurício

}

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
			posicoes[r+4] = posicoes[r+3];
			strcpy(pessoa[r+4], pessoa[r+3]);
			
			posicoes[r+3] = posicoes[r+2];
			strcpy(pessoa[r+3], pessoa[r+2]);
			
			posicoes[r+2] = posicoes[r+1];
			strcpy(pessoa[r+2], pessoa[r+1]);
			
			posicoes[r+1] = posicoes[r];
			strcpy(pessoa[r+1], pessoa[r]);
			
			posicoes[r] = contador;
			strcpy(pessoa[r], t->nomes[i]);
		}
		
		else if(contador > posicoes[r+1]){
			posicoes[r+4] = posicoes[r+3];
			strcpy(pessoa[r+4], pessoa[r+3]);
			
			posicoes[r+3] = posicoes[r+2];
			strcpy(pessoa[r+3], pessoa[r+2]);
			
			posicoes[r+2] = posicoes[r+1];
			strcpy(pessoa[r+2], pessoa[r+1]);
			
			posicoes[r+1] = contador;
			strcpy(pessoa[r+1], t->nomes[i]);
		}
		
		else if(contador > posicoes[r+2]){
			posicoes[r+4] = posicoes[r+3];
			strcpy(pessoa[r+4], pessoa[r+3]);
			
			posicoes[r+3] = posicoes[r+2];
			strcpy(pessoa[r+3], pessoa[r+2]);
			
			posicoes[r+2] = contador;
			strcpy(pessoa[r+2], t->nomes[i]);		
		}
		
		else if(contador > posicoes[r+3]){
			posicoes[r+4] = posicoes[r+3];
			strcpy(pessoa[r+4], pessoa[r+3]);
			
			posicoes[r+3] = contador;
			strcpy(pessoa[r+3], t->nomes[i]);
			
		}
		
		else if(contador>posicoes[r+4]){
			posicoes[r+4] = contador;
			strcpy(pessoa[r+4], t->nomes[i]);
		}
		contador = 0;
	}
	printf("\n\nAs 5 pessoas com mais amigos sao: \n");
	for(i=0; i<5; i++){
		printf("%s\n", pessoa[i]);
	}
	system("PAUSE"); //faz com que o programa nao pare, volte para o menu
}

void quemMenosTemAmigo(TstructNomes *t){
	int i, j, m, n, contador = 0, r =0, pe, so;
	
	int posicoes[3] = {0,0,0};
	char pessoa[3][TAMANHO]; //variavel para guardar os nomes das pessoas que menos tiverem amizades
	
	for(i=0; i<TAMANHO; i++){ //quem tem amigo ao contrario
		for(j=0; j< TAMANHO; j++){
			if(t->amigos[i][j] == 0) //quem nao tiver amigo
				contador++;
		}
		
		if(posicoes[r] == 0){
			posicoes[r] = contador;
			strcpy(pessoa[r], t->nomes[i]);
		}
		
		if(contador <= posicoes[r]){ //se tiver alguem com menos amizades 
			posicoes[r+2] = posicoes[r+1];
			strcpy(pessoa[r+2], pessoa[r+1]);
			
			posicoes[r+1] = posicoes[r];
			strcpy(pessoa[r+1], pessoa[r]);
			
			posicoes[r] = contador;
			strcpy(pessoa[r], t->nomes[i]);
		}
		
		else if(contador <= posicoes[r+1]){
			posicoes[r+2] = posicoes[r+1];
			strcpy(pessoa[r+2], pessoa[r+1]);
			
			posicoes[r+1] = posicoes[r];
			strcpy(pessoa[r+1], pessoa[r]);
		}
		
		else if(contador <= posicoes[r+2]){
			posicoes[r+2] = contador;
			strcpy(pessoa[r+2], t->nomes[r]);	
		}
		contador = 0; //zera o contador
		
	}
	
	printf("\n\nAs 3 pessoas que menos possuem amizades sao: \n");
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
					if(t->amigos[j][k] == 1 && i != k && t->amigos[i][k] != 1){
						printf("\n\n%s tera a sugestao de amizade de '%s' pois ambos sao amigos de %s\n\n", t->nomes[i], t->nomes[k], t->nomes[j]);
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
			if(strcmp(t->nomes[i], pessoa) == 0){
				if(t->amigos[i][j] == 1){
					printf("%s possui amizade com %s\n", t->nomes[i], t->nomes[j]);
				}
			} 
		}
	}
	system("PAUSE");	
}

void opcao(TstructNomes *t, int digitoUsuario){
	switch(digitoUsuario)
	{
		case 0:
			break;
		case 1:
			encontraAmigos(t);
			break;
		case 2:
			quemMaisTemAmigo(t);
			break;
		case 3:
			quemMenosTemAmigo(t);
			break;
		case 4:
			sugestao(t);
			break;
		default:
			printf("Nao existe essa opcao!\n");
			break;
	}// switch()
}
	
void menuInicializar(TstructNomes *t){
	int digitoUsuario;
	
	printf("====================================================\n");
	printf("Bem vindo!\n");
	printf("===============================================================================\n");
	
	do{
		printf("\n\n\t\tSelecione a opcao desejada: \n");
		printf("0 - Sair\n");
		printf("1 - Ver os amigos de um usuario\n");
		printf("2 - Os 5 usuarios mais bem relacionados\n");
		printf("3 - Os 3 usuarios mais solitarios\n");
		printf("4 - A sugestao de novos amigos para todos os membros da rede social\n\n");
		printf("========================================================================================================================\n");
		
		printf("Digite: ");
		scanf("%i", &digitoUsuario);
		
		opcao(t, digitoUsuario);
	}while(digitoUsuario != 0);
	
	
}


int main() {
	TstructNomes *t = (TstructNomes *)calloc(TAMANHO, sizeof(TstructNomes));
	inicio(t);
	menuInicializar(t);
	
	return 0;
}
