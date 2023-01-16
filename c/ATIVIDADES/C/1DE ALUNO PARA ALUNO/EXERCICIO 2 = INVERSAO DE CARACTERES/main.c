#include <stdio.h>
#include <stdlib.h>



//DICAS: NÃO CONSEGUI ADICIONAR UMA INSTRUCAO PARA MOSTRAR O NUMERO DIGITADO EM X NO FINAL DO PROGRMAA E O NUMERO INVERTIDO
// TESTAR CONTINUAR S OU NAO APOS A INSTRUCAO ESTAR COMPLETA
// SWITCH CASE PARA ARMAZENAR VARIOS NUMEROS E IMPRIMI-LOS EM SEQUENCIA INVERTIDOS QUANDO O USUARIO DIGITAR 'PARAR' O PROGRAMA;

int main()
{
    int x, cifra;


    printf("Digite um numero para ser invertido: ");
    scanf("%i", &x);


    if (x >= 0){
        do {
            cifra = x % 10;
            printf("%i", cifra);
            x = x / 10;
        }
        while(x != 0);
        printf("\n");

    }

    else{
         x = x * -1;
         do {
            cifra = x % 10;
            printf("%i", cifra);
            x = x / 10;
        }
         while(x != 0);
         printf("\n");


    }


    return 0;
}
