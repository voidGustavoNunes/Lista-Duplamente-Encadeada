#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;

    printf("Digite dois numeros inteiros: \n");
    scanf("%i", &x);
    scanf("%i", &y);

    if (x % y == 0){
        printf("%i e divisivel por %i, pois o resto da divisao e 0", x, y);

    }else{
        printf("%i nao e divisível por %i", x ,y);

    }



    return 0;
}
