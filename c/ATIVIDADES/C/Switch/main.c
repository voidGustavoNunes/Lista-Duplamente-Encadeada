#include <stdio.h>
#include <stdlib.h>


// o switch e utilizado para eliminar os ifs, como por exemplo em menus
int main()
{
    /*
        switch (expressao){
            case (expressao-cost):

            break;

            case (true):

            default:         // sempre sera executado
            //nao ha necessidade de break;
        }


    */
    int i;
    printf("Digite um valor entre 1 e 9: \n");
    scanf("%i", &i);

    switch(i){
        case 1:     //caso o valor que esteja em i seja 1
            printf("A opcao digitada foi um\n");
            break;
        case 2:
            printf("A opcao digitada foi dois\n");
            break;

        case 3:
        case 4:
        case 5:
            printf("Voce digitou um numero entre 3 e 5");
            break;

        default: // a instrucao sera executada caso nao haja a instrucao break ou nenhum item seja satisfatorio
            printf("opcao default");

    }


    return 0;
}
