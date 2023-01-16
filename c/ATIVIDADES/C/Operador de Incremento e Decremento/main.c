#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    printf("%i\n", i);
    printf("%i\n", ++i);
    i++;
    printf("%i\n", i);

    system ("cls");

    int i2 = 5;
    printf("%i\n", i2);
    printf("%i\n", --i2); //o i2 ja printa como 4
    printf("%i\n", i2--); //o i2 so printara como 3 se for acrescentado um printf apos


    return 0;
}
