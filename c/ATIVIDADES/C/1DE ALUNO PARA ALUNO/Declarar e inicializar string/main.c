#include <stdio.h>
#include <stdlib.h>

// LEMBRAR DO CARACTERE NULO \0 =>> ELE E O MOTIVO DAS DUAS PRIMEIRAS STRINGS NAO FUNCIONAREM, PRECISA DE 7 CARACTERES

int main()
{
    char palavra [6]  = {'B', 'R', 'A', 'S', 'I', 'L'}; //=> nessa string eu so tenho 6 caracteres e so, nao tem espaco para o nulo
    char palavra[] = {'B', 'R', 'A', 'S', 'I', 'L'};
    char palavra[7] = {"Brasil"}; // da certo
    char palavra[] = {"Brasil"}; // da certo pois o compilador inclui automaticamente o caractere nulo
    char palavra[] = "Brasil"; // da certo

    printf("%s\n", palavra);


    return 0;
}
