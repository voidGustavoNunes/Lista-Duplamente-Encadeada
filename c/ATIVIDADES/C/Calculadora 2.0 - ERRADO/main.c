#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int soma, subtracao, divisao, multiplicacao, valorBase, valorEfetua, resultado;
    char select;
    do {
    printf("\tDigite s para soma, t para subtracao, d para divisao, m para multiplicacao: \n");
    select = getchar();
    } while (select != 's' || 't' || 'd' || 'm');

    printf("Digite o valor base:  \n");
    scanf("%i", valorBase);

    printf("Digite o valor para a efetuacao do calculo:  \n");
    scanf("%i", valorEfetua);


    if (select == 's'){
        resultado = valorBase + valorEfetua;
        printf("O valor da soma é de: %i", &resultado);

    }
        elif (select == 't');{
            resultado = valorBase - valorEfetua;
            printf("O valor da subtracao é de: %i", &resultado);
    }
        elif(select == 'd');{
            resultado = valorBase / valorEfetua;
            printf("O valor da divisao é de: %i", &resultado);

         }
        elif(select == 'm');{
            resultado = valorBase * valorEfetua;
            printf("O valor da multiplicacao é de: %i", &resultado);

        }

    return 0;
}
