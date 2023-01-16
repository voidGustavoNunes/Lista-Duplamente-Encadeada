#include <stdio.h>
#include <stdlib.h>
//pedir que o usuario digite quatro notas, armazenar em um vetor e calcular o total e media



int main()
{
    int vetor[4];
    int total = 0;
    int media = 0;

    printf("Digite quatro notas: \n");
    for (int i = 0; i < 4; i++){
        scanf("%i", &vetor[i]);

    }
    for (int i = 0; i < 4 ; i++){
    total += vetor[i];

    }
    media = total / 4;


    // funcao para ver valores dentro do vetor
    printf("\n\t======= VALORES DENTRO DO VETOR ======= \n");
    for (int i = 0; i <= 3; i++){ //usa se 3 pois o vetor comeca com 0;
        printf("\n%i\n", vetor[i]);

    }
    printf("\t\t ========================\n\n");


    printf("O total e >> %i, e a media e >> %i.", total, media);


    return 0;
}
