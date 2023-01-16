#include <stdio.h>
#include <stdlib.h>

/*Criar um programa que leia a quantidade de números a serem lidos. Depois, leia os números
inteiros até essa quantidade e imprima o menor deles. Suponha que todos os números lidos
serão positivos, então coloque a validação desses números.*/

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
