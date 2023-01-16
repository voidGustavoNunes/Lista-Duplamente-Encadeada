#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define VERDADEIRO 1;
#define FALSO 0;

typedef struct fabricante{
    char nome[100];
    char nacionalidade[100];
    int anoFundacao;
}Fabricante;

int min(int a, int b){
    return (a>b) ? b:a;
}


int comparaFabricante(Fabricante *fabricante, Fabricante *fabricante2, int i, int j){
    int indice;
    // f1 nome maior
    if (strcmp(fabricante2[i].nome, fabricante[j].nome) == 1){
        indice = 1;
    // f2 nome maior
    }else if(strcmp(fabricante2[i].nome, fabricante[j].nome) == -1){
        indice = -1;
    // comparando por nacionalidade
    }else{
        if(strcmp(fabricante2[i].nacionalidade, fabricante[j].nacionalidade) == 1){
            indice = 1;
        }
        else if(strcmp(fabricante2[i].nacionalidade, fabricante[j].nacionalidade) == -1){
            indice = -1;
        }
        //comparando por ano de fundacao
        else{
            if(fabricante2[i].anoFundacao > fabricante[j].anoFundacao){
                indice = 1;
            }
            else if(fabricante2[i].anoFundacao < fabricante[j].anoFundacao){
                indice = -1;
            }
            else{
                indice = 0;
            }
        }
    }
    return indice;
}


void simplemerge(Fabricante *fabricantes, int is1, int fs1, int is2, int fs2, Fabricante *fabricantes_resultado, int r){
    int ini_seg1 = is1;
    int fim_seg1 = fs1;
    int ini_seg2 = is2;
    int fim_seg2 = fs2;
    int k = r;
    while((ini_seg1 <= fs1) && (ini_seg2 <= fs2)){
        if((comparaFabricante(fabricantes, fabricantes, ini_seg1, ini_seg2)) == -1){
            fabricantes_resultado[k] = fabricantes[ini_seg1];
            ini_seg1++;
            
        }else{
            fabricantes_resultado[k] = fabricantes[ini_seg2];
            ini_seg2++;
        }
        k++;
    }
    if (ini_seg1 > fs1){
        for(int i = ini_seg2; i<= fs2; i++){
            fabricantes_resultado[k] = fabricantes[i];
            k++;
        }
    }else{
        for(int i = ini_seg1; i<= fs1; i++){
            fabricantes_resultado[k] = fabricantes[i];
            k++;
        }
    }
}

void mergepass(Fabricante *fabricantes, Fabricante *fabricantes_resultado, int n, int L){
    int p = 0;
    int q = p + L;
    int r = 0;
    while(q<n){
        simplemerge(fabricantes, p, q-1, q, min(q+L-1, n-1), fabricantes_resultado, r);
        r = r + 2 * L;
        p = q + L;
        q = p + L;
    }
    if(p < n)
        for(int i = p; i < n; i++)
            fabricantes_resultado[i] = fabricantes[i];
}

void mergeSort(Fabricante *fabricantes, int n){
    Fabricante *fabricantes_resultado = (Fabricante *)malloc(n*sizeof(Fabricante));
    int L = 1;
    int eh_par = VERDADEIRO;
    while (L < n){
        if (eh_par){
            mergepass(fabricantes, fabricantes_resultado, n, L);
            eh_par = FALSO;
        }else{
            mergepass(fabricantes_resultado, fabricantes, n, L);
            eh_par = VERDADEIRO;
        }
        L = L *2;
    }
    if(!eh_par)
        for(int i = 0; i < n; i++)  
            fabricantes[i] = fabricantes_resultado[i];
}

void escreveVetor(Fabricante *fabricantes, int n){
    for(int i=0; i<n; i++){
        printf("Fabricante [%i]:\n\t Nome: [%s] ,\n\t Nacionalidade: [%s],\n\t Ano de Fundacao: [%i] \n",  i, fabricantes[i].nome, fabricantes[i].nacionalidade, fabricantes[i].anoFundacao);
    }
    printf("\n\n");
}

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
    
    mergeSort(fabricantes, 6);
    escreveVetor(fabricantes, 6);
    
    return 0;
}





