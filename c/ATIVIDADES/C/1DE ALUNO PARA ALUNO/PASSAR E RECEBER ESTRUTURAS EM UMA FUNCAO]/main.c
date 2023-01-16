#include <stdio.h>
#include <stdlib.h>



//deve se utilizar uma struct global por causa da funcao que nao consegue receber os valores da struct que esta dentro da main
struct horario{
        int horas;
        int minutos;
        int segundos;
};


int main()
{
    struct horario teste(struct horario x); //para chamar uma funcao struct voce deve colocar o struct +
                                            //o nome que definiu(estrutura dentro do main) + o nome da funcao
    struct horario{
        int horas;
        int minutos;
        int segundos;
    };

    struct horario agora;
    agora.horas = 15;
    agora.minutos = 12;
    agora.segundos = 46;

    struct horario proxima;
    proxima = teste(agora); //erro

    printf("horas: %i, minutos: %i, segundos: %i \n",proxima.horas, proxima.minutos, proxima.segundos);

    system("pause");
    return 0;
}



struct horario teste(struct horario x){
    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;

    printf("horas: %i, minutos: %i, segundos: %i \n",x.horas, x.minutos, x.segundos);


    return x;
};


