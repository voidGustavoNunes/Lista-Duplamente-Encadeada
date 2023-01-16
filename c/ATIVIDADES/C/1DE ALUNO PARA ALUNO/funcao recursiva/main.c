#include <stdio.h>
#include <stdlib.h>


//calcular fatorial
int main()
{
    int fatorial (int x);
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    resultado = fatorial(numero);


    printf("O resultado e: %i \n", resultado);

    system("pause");
    return 0;
}
int fatorial (int x){
    int resultado;

    if (x == 0){
        resultado = 1;


    }else{
        resultado = x * fatorial(x -1); //fatorial(x-1) e tudo um numero só, recebe um numero somente
                    //5 * 4
                    //4 * 3

    }
    return resultado;

}
