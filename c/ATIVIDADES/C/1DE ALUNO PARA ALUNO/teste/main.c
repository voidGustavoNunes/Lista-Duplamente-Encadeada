#include <stdio.h>
#include <stdlib.h>

struct horario{
    int horas;
    int minutos;
    int segundos;


};

int main()
{
    void recebeHorario(struct horario lista[5]);
    void printfHorario(struct horario lista[5]); //tem que declarar "struct" dentro do parenteses
    struct horario agora[5];

    recebeHorario(agora); //lembre de declarar a variavel que ira receber dentro do parenteses
    printfHorario(agora);

    return 0;
}

void recebeHorario(struct horario lista[5]){ //o nome tem que ser diferente dentro () , horario lista != horario agora
    int i;
    for(i = 0; i < 5; ++i){
        printf("Digite o %i horario (hh:mm:ss): ", i + 1);
        scanf("%i:%i:%i", &lista[i].horas,
                          &lista[i].minutos,
                          &lista[i].segundos            );

    }

}

void printfHorario(struct horario lista[5]){
    for (int i = 0; i < 5; ++i){
        printf("%i:%i:%i\n", lista[i].horas,
                             lista[i].minutos,
                             lista[i].segundos           );



    }


}





