/*Ler uma string e imprimir se a mesma é ou não palíndrome.
Uma palavra é palíndrome se lendo de frente para trás ou de trás para frente temos exatamente a mesma string.
Exemplos: “mutum” é palíndrome.
“subi no onibus” é palíndrome. Nesse caso deve-se ignorar os espaços em branco*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void str(char *str1){
    int i = 0, diferente;
    int tamanho = strlen(str1) - 1;


    while (tamanho > i){

        if (str1[tamanho] == ' '){
            tamanho--;}

        if(str1[i] == ' '){
            i++;
        }

        if(str1[tamanho] != str1[i]){
            diferente = 1;
        }
        else{
            diferente = 0;
        }

        tamanho--;
        i++;
    }
    if (diferente == 1){
        printf("\nNao e um palindrome");
    }
    else{
        printf("\nE palindrome");
    }
}


int main()
{

    char string[100];

    printf("Digite uma string: ");
    gets(string);

    strlwr(string);
    str(&string);

    return 0;
}

