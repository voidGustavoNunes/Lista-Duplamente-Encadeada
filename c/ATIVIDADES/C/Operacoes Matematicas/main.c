#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    num1= 15;
    num2= 20;

    int soma = num1 + num2;
    printf("O resultado da soma e: %i\n", soma);

    int subtracao = num2 - num1;
    printf("O resultado da subtracao: %i\n", subtracao);

    int multiplicacao = num1 * num2;
    printf("O resultado da multiplicacao e: %i\n", multiplicacao);

    int divisao = num2 / 3;
    printf("O resultado da divisao e: %i\n", divisao);


    return 0;
}
