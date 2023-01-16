#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;

    do {

        printf("Digite 0 para sair do looping: \n");
        c = getchar();

    }
    while(c != '0')

    return 0;
}
