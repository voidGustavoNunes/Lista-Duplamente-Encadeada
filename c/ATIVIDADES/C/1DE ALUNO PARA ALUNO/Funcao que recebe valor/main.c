#include <stdio.h>
#include <stdlib.h>

int main()
{
    float somaDeDigitos(float num1, float num2);
    float a, b, soma;

    printf("Digite 1 numero: \n");
    scanf("%f", &a);
    printf("Digite novamente: \n");
    scanf("%f", &b);

    soma = somaDeDigitos(a, b); //importante

    printf("A soma e: %.2f\n", soma);

    system("pause");
    return 0;
}
float somaDeDigitos(float num1, float num2){
    float valorAbsoluto(float x);

     if (num1 < 0){
        num1 = valorAbsoluto(num1);
    }

    if (num2 < 0){
        num2 = valorAbsoluto(num2);

    }

    return num1 + num2;
}
float valorAbsoluto(float x){ //a funcao dela e transformar um numero de n1 em positivo

    return x * -1;
}
