#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bi1, bi2, bi3, bi4, soma, media;

    printf("Digite a nota do seu 1 bimestre: \n");
    scanf("%i", &bi1);

    printf("Digite a nota do seu 2 bimestre: \n");
    scanf("%i", &bi2);

    printf("Digite a nota do seu 3 bimestre: \n");
    scanf("%i", &bi3);

    printf("Digite a nota do seu 4 bimestre: \n");
    scanf("%i", &bi4);

    soma = bi1 + bi2 + bi3 + bi4;
    media = soma / 4;

    if (media >= 7){
        printf("\tVoce esta APROVADO\n");


    }
    else{
        printf("\tVoce esta REPROVADO\n");

    }

    return 0;
}
