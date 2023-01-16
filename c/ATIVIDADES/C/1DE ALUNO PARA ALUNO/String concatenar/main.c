#include <stdio.h>
#include <stdlib.h>

//concatenar string e juntar elas

int main()
{
    void concatenarString (char string1[], int t1,
                           char string2[], int t2,
                           char string3[]); //t1 e o valor do tamanho q tem a string (OBRIGATORIO)



    char palavra1[4] = {'p', 'a', 'o', '_'};
    char palavra2[9] = {'m', 'o', 'r', 't', 'a', 'd', 'e', 'l', 'a'};
    char novaPalavra[13];

    concatenarString (palavra1, 4, palavra2, 9, novaPalavra);


    for(int i = 0; i < 13; ++i){ //vai ler a palavra concatenada
        printf("%c", novaPalavra[i]);

    }
    printf("\n");

    return 0;
}
void concatenarString (char string1[], int t1, char string2[], int t2, char string3[]){
    for(int i = 0; i < t1; ++i){
        string3[i] = string1[i]; //nao e novaPalavra pois tem que estar dentro da funcao

    }

    for(int j = 0; j < t2; ++j){
        string3[t1 + j] = string2[j]; //vai comecar a partir do "_" depois do pao, vai acrescentando j


    }


}
