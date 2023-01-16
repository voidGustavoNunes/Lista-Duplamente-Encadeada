#include <stdio.h>
#include <stdlib.h>
/*
    Crie um programa que possui uma função que recebe como argumento um vetor de tamanho 5 de tipo estrutura sendo que essa estrutura
    deve armazenar um determinado horario no formato hh:mm:ss . Faça que o usuário digite 5 horarios diferentes que deverão ser
    armazenados no argumento recebido. Crie uma segunda função que receberá este mesmo vetor estrutura mas dessa vez a função
    deverá apenas ler os valores armazenados no vetor estrutura mostrando uma mensagem apropriada.


*/

struct horario{ //variavel global
    int horas;
    int minutos;
    int segundos;

};


int main()
{
    void receberHorario(struct horario list[5]); //o nome dentro do parenteses nao precisa ser igual ao nome da estrutura declarada
    void printHorario(struct horario list[5]);

    struct horario listaHorarios[5];

    receberHorario(listaHorarios);
    printHorario(listaHorarios);



    return 0;
}



void receberHorario(struct horario list[5]){

    for (int i = 0; i <5 ; ++i){
        printf("Digite o %i horario(hh:mm:ss)\n", i + 1); //i + 1 pois o i comeca com 0
        scanf("%i:%i:%i", &list[i].horas,
                          &list[i].minutos,
                          &list[i].segundos );
    }
}


void printHorario(struct horario list[5]){
  printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
  for (int i = 0; i <5 ; ++i){
        printf("O %i horario e: %i:%i:%i\n",i + 1,
                                           list[i].horas,
                                           list[i].minutos,
                                           list[i].segundos );

    }

}

