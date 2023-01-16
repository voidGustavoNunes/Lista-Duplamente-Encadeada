#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite o numero 1: \n");

    char c;
    c=getchar();

    if(c == '1'){
        printf("\nO caractere digitado esta correto\n");


    }else{
        printf("O valor digitado e invalido\n");
        printf("O valor digitado foi: %c", c);

    }


    return 0;
}
