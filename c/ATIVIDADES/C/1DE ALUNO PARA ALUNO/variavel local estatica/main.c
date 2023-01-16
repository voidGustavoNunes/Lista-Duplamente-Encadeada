#include <stdio.h>
#include <stdlib.h>

int main()
{
    void teste (void);
    teste();
    teste();
    teste();

    return 0;
}
void teste (){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;
    printf("Local Automatica: %i\n", variavelLocalAutomatica);


    static int variavelLocalEstatica = 2; //torna a variavel estatica
    variavelLocalEstatica *= 2;
    printf("Local Estatica: %i\n", variavelLocalEstatica);

}
