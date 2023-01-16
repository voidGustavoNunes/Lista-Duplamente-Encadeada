#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i = 10;

    //printf("\n\t%i\n", i!= 1);
    //printf("\n\t%i\n", !(i== 1)); //esta negando


    printf("Digite um numero != de 5: ");
    scanf("%i", &i);

    if (i != 5){
        printf("TRUE");
    }
    else{
        printf("FALSE");

    }

    return 0;



    /*
    positivo = 1
    negativo = 0

    */




}
