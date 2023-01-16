#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int x = 0; x<= 10; x++){
        if (x == 2){
            printf("- \n");
            continue; // aqui o programa apenas pula o laco atual

        }
        if (x == 8){
            printf("- \n");
            break; //aqui o programa para no 8, nao executa o 9 e o 10


        }
        printf("%i\n" , x);
    }

    return 0;
}
