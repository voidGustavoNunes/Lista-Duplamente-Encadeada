#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 0;
    char caractere = 0;
    printf("Digite um caractere entre A e G: \n");
    scanf("%c", caractere);

/*
    switch(caractere){
        case 'A':
            valor = 65;
            break;
        case 'B':
            valor = 66;
            break;
        case 'C':
            valor = 67;
            break;
        case 'D':
            valor = 68;
            break;
        case 'E':
            valor = 69;
            break;
        case 'F':
            valor = 70;
            break;
        case 'G':
            valor = 71;
            break;
        default:
            valor = -1;



    }
*/

    switch(caractere){
        valor = (caractere == 'A') ? 65 :
                (caractere == 'B') ? 66 : //caso caractere informado for 'B' nossa variavel valor recebera o valor 66 senao verifica se o caractere digitado e a letra D ...
                (caractere == 'C') ? 67 :
                (caractere == 'D') ? 68 :
                (caractere == 'E') ? 69 :
                (caractere == 'F') ? 70 :
                (caractere == 'G') ? 71 : -1;


    }

    printf("O caractere digitado na tabela ASCII e: %i", &valor);
    return 0;
}
