#include <stdio.h>
#include <stdlib.h>

/*Criar um programa que leia a quantidade de n�meros a serem lidos. Depois, leia os n�meros
inteiros at� essa quantidade e imprima o menor deles. Suponha que todos os n�meros lidos
ser�o positivos, ent�o coloque a valida��o desses n�meros.*/

int main()
{
    int quantidade, i, menor = 99999, valor;
    do{
        printf("Digite a quantidade de numeros a serem lidos: ");
        scanf("%i",&quantidade);
    }
    while(quantidade <= 0); // validacao

    for(i = 1;i<= quantidade; i++){
      do{
            printf("%i, ", i);
      }while(i <= 0);

      if (valor <= menor){
        menor = valor;
    }

    }

    printf("\nO menor numero deles e o: %i", menor);
    return 0;
}
