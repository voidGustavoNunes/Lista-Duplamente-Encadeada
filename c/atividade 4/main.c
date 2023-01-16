#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[20], caractere;
    int i, cont = 0;

    printf("Digite a string: ");
    gets(string);

    printf("Digite o caractere: ");
    scanf("%c", &caractere);

    for(i = 0; i <= 20; i++){
         if (string[i] == caractere){
            cont++;
         }

    }
    printf("A quantidade de vezes que o caractere %c aparece e de: %i", caractere, cont);
    return 0;
}
