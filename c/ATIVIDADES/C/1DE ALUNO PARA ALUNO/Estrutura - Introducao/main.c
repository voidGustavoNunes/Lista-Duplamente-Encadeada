#include <stdio.h>
#include <stdlib.h>

//COMO FAZER UMA ESTRUTURA E DECLARA-LA

//LEMBRE SE SEMPRE DAS FUNCOES, ESTRUTURAS TEM UMA FUNCAO PARECIDA

int main()
{
    struct horario{ // fez a struct
        int horas;
        int minutos;
        int segundos;
        double teste;
        char letra;
    };

    struct horario agora; // declarou um nome a uma struct chamada "agora"

    //COMO FACO PARA ALTERAR UMA VARIAVEL DENTRO DE UMA STRUCT?

    agora.horas = 15;
    agora.minutos = 18;
    agora.segundos = 30;

    printf("%i horas, %i minutos e %i segundos.\n", agora.horas, agora.minutos, agora.segundos);
    printf("----------------------------------\n");

    ////////////////////////////////////////////////////////////////////////////////////////////////////

    struct horario depois;

    depois.horas =  agora.horas + 10; //podemos criar operacoes matematicas
    depois.minutos =  agora.minutos;
    depois.teste =  50.23 / 123;
    depois.letra = 'a';

    printf("%i horas, %i minutos, %f teste, '%c' letra\n ", depois.horas, depois.minutos, depois.teste, depois.letra);

    system("pause");
    return 0;
}
