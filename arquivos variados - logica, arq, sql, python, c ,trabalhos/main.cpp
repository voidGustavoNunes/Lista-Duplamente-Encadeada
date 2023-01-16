#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define TAM  5000

typedef struct fabricante{
    char *nome;
    char *nacionalidade;
    int anoFundacao;
}Fabricante;

int comparaFabricante(Fabricante *fabricante, Fabricante *string, int i, int j){
    int indice;
    // f1 nome maior
    if (strcmp(string[i].nome, fabricante[j].nome) == 1){
        indice = 1;
    // f2 nome maior
    }else if(strcmp(string[i].nome, fabricante[j].nome) == -1){
        indice = -1;
    // comparando por nacionalidade
    }else{
        if(strcmp(string[i].nacionalidade, fabricante[j].nacionalidade) == 1){
            indice = 1;
        }
        else if(strcmp(string[i].nacionalidade, fabricante[j].nacionalidade) == -1){
            indice = -1;
        }
        //comparando por ano de fundacao
        else{
            if(string[i].anoFundacao > fabricante[j].anoFundacao){
                indice = 1;
            }
            else if(string[i].anoFundacao < fabricante[j].anoFundacao){
                indice = -1;
            }
            else{
                indice = 0;
            }
        }
    }
    return indice;
}


/*INSERT SORT*/

void insertionSort(Fabricante *fabricante, int n){
    //valor a ser inserido
    Fabricante *valor = (Fabricante *) malloc(TAM * sizeof(Fabricante));
    int k, j;
    for(int i=1; i<n; i++){         // i: posicao do elemento a ser inserido
        valor[i] = fabricante[i];
        k = 0;                      // k e o inicio do segmento ordenado
        j = i - 1;                  // j e o fim do segmento ordenado
        while ( (j >= 0) && (k == 0) ){
            if (comparaFabricante(fabricante, valor, i, j) == -1) {
                fabricante[j+1] = fabricante[j];
                j = j - 1;
            } else{
                k = j+1;                // posicao da insercao
            }
        }
    fabricante[k] = valor[i];
    }
}

void escreveVetor(Fabricante *fabricante, int n){
    for(int i=0; i<n; i++){
        printf("Fabricante [%i]:\n\t Nome: [%s] ,\n\t Nacionalidade: [%s],\n\t Ano de Fundacao: [%i] \n",  i, fabricante[i].nome, fabricante[i].nacionalidade, fabricante[i].anoFundacao);
    }
    printf("\n\n");
}
/* SHELL SORT*/

void insertionSortAdaptado(Fabricante *fabricante, int n, int f, int h){
    Fabricante *valor = (Fabricante *) malloc(TAM * sizeof(Fabricante));
    int k,j, i;
    for(i=f+h; i<n; i = i+h){
        valor[i] = fabricante[i];
        k = f;                          // k e o inicio do segmento ordenado
        j = i-h;                        // j e o fim do segmento ordenado
        while((j>=f) && (k==f)){
            if(comparaFabricante(fabricante, valor, i, j) < 0){
                fabricante[j+h] = fabricante[j];
                j = j - h;
            }
            else{
            k = j+h;                    //posicao da insercao
            }
        }
        fabricante[k] = valor[i];
    }
}

void shellSort(Fabricante *fabricante, int n, int np){
    int h;
    for(int p = np; p>0; p--){               //numero de passos (cada passo e uma organizacao de segmentos)
        h = (int)pow(2.0, (int) p - 1);      // determina o tamanho do segmento (ate que h=1)
        for( int j=0; j<h; j++){             // ordena os h segmentos
            insertionSortAdaptado(fabricante, n, j, h);
        }
    }

}


//############################################################################################



int main()
{	
	Fabricante fabricantes[] = {
	{"GearFab", "Brasileiro", 2000},
	{"UsinaFab", "Americano", 2001},
	{"UsinaFab", "Americano", 2003},
	{"AlumFab", "Congoles", 2003},
	{"ZincoFab", "Brasileiro", 1993},
	{"AaVivaaUcraniaFab", "Ucraniano", 2015},
	
	};
		
   /* Fabricante *fabricantes = (Fabricante *)malloc(TAM*sizeof(Fabricante));
    fabricantes[0].nome = "GearFab";
    strcpy(fabricantes[0].nacionalidade, "Brasileiro");
    strcpy(fabricantes[0].anoFundacao, 2000);
    fabricantes[1].nome = "UsinaFab";
    strcpy(fabricantes[1].nacionalidade, "Americano");
    strcpy(fabricantes[1].anoFundacao, 2001);
    fabricantes[2].nome = "UsinaFab";
    strcpy(fabricantes[2].nacionalidade, "Americano");
    strcpy(fabricantes[2].anoFundacao, 2003);
    fabricantes[3].nome = "AlumFab";
    strcpy(fabricantes[3].nacionalidade, "Congoles");
    strcpy(fabricantes[3].anoFundacao, 2003);
    fabricantes[4].nome = "ZincoFab";
    strcpy(fabricantes[4].nacionalidade, "Brasileiro");
    strcpy(fabricantes[4].anoFundacao, 1993);
    fabricantes[5].nome= "AaVivaaUcraniaFab";
    strcpy(fabricantes[5].nacionalidade, "Ucraniano");
    strcpy(fabricantes[5].anoFundacao, 2015);*/
   
    insertionSort(fabricantes,6);
    shellSort(fabricantes,6, 3);
    escreveVetor(fabricantes, 6);
    
    return 0;
    
}
