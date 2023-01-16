#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Digite um caractere em letra minuscula: \n");
    scanf("%c", &c);

    if (c >= 'a'){
            printf("\nA letra que voce digitou em maiusculo: %c \n", toupper(c));}

    return 0;
}
// toupper torna a letra maisucula <ctyoe.h>
