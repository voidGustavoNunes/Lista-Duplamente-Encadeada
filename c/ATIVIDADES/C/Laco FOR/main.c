#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* for (parte1; parte2; parte3);

        parte 1 ->> e onde inicializamos e declaramos a nossa variavel

        parte 2 ->> e a condicao

        parte 3 ->> e onde incrementamos a nossa variavel


    */

    for (int i  = 0; i <= 10; i++){
        printf("%i\n", i);
    }

    system("cls");

    for (int a = 0, b = 10; a<=10; a++, b--){
        printf("%i", a);
        printf(" - ");
        printf("%i\n", b);

    }


    return 0;
}
