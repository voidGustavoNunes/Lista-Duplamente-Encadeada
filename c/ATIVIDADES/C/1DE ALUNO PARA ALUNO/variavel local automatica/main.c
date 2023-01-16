#include <stdio.h>
#include <stdlib.h>

int main()
{
    void teste (void);

    teste();
    teste();


    return 0;
}
void teste (void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;
    printf("%i", variavelLocalAutomatica);

}
