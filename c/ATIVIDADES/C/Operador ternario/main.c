#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num2;

    printf("Digite um numero: \n");
    scanf("%i", &num);
/*
    if (num < 0)
        num2 = 0;
    else
        num2 = num;


*/
    num2 = (num < 0) ? 0: num; //num2 deve receber = se o valor de num for menor que zero, então ( ? ) retorna ao valor 0,
                                //senao ( : ) retorna ao valor de num

    printf("O numero digitado foi: %i", num2);


    return 0;
}
