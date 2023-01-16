#include <stdio.h>
#include <stdlib.h>

//algoritmo para organizar os numeros de dentro do vetor em ordem crescente

int main()
{
    int vetor [10] = {6, 4, 1, 9, 8, 0, 5, 7, 3, 2};
    int i;
    void ordemCrescente (int vetor[], int n); //nao precisa declarar o numero de membros dentro do vetor

    ordemCrescente(vetor, 10); // não precisar declarar na funcao o vetor assim: vetor[10], depois se declara a quantidade de numeros de dentro do vetor
    for (i = 0; i < 10; ++i){
        printf("%i\n", vetor[i]);

    }

    system("pause");
    return 0;

}
void ordemCrescente(int vetor [], int n){
    int i, j, temporaria;

    for(i = 0; i < n; ++i){
        for(j = i + 1; j < n; ++j){ //j = i+ 1, pois o  j vai pegar o proximo numero, depois de i, duvidas: https://www.youtube.com/watch?v=CbRYQ9fi4dQ&list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW&index=36
            if(vetor[i] > vetor[j]){
                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[i] = temporaria;
            }
        }


    }



}
