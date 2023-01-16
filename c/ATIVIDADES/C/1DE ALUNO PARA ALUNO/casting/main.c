#include <stdio.h>
#include <stdlib.h>

//casting e uma limitacao da linguagem c

//quando se pega duas variaveis inteiras e se utiliza em uma equacao por mais q o resultado seja em float, nao ira dar certo


int main()
{
    int x = 16;
    int y = 3;

    float resultado; //casting se resolve utlizando:
    //resultado = ((float)(x / y)); == usa se o float pois a variavel resultado e float, mas poderia ser char tambem ou double

    resultado = x / y;

    printf("%.2f", resultado);


    return 0;
}
