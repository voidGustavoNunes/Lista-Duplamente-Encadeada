#include <stdio.h>
#include <stdlib.h>

int main()
//10 minutos de vida a cada cigarro
//1 dia em minutos: 1440
//1 ano em minuto: 525600
{
    int quantidade_cigarros, anos,tempo, anos_em_minuto, total;

    printf("Qual a quantidade de cigarros fumados por dia? ");
    scanf("%i", &quantidade_cigarros);

    printf("\nHá quantos anos você fuma cigarro? ");
    scanf("%i", &anos);

    anos_em_minuto = anos * 525600; //quantos anos ele fumou cigarro mas em minutos
    tempo = quantidade_cigarros * 10; // quanto tempo em minutos ele já perdeu;

    total = anos_em_minuto * tempo;

    printf("Ele ja perdeu %i minutos de vida", total);


    return 0;
}
