#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    char string[100];
    char caractere;
/*
    printf("Digite uma frase: ");
    scanf("%s", &string);
*/

//com esse comentario o codigo da certo

    do{
        caractere = getchar(); //pega o caractere
        string[i] = caractere;
        ++i;

    }while(caractere != '\n');

    string[- 1] = '\0'; //para acrescentar o caractere \0 no lugar do \n;

    printf("%s", string);

    return 0;
}
