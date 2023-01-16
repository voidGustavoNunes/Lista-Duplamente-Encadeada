#include <stdio.h>
#include <stdlib.h>

int main()
{
    void alfabetico (char variavel);

    char nome[20];
    int i = 0;

    printf("Digite uma frase: ");
    scanf("%s", nome);

    while(nome[i] != '\0'){
        alfabetico(nome[i]);
        ++i;
    };


    return 0;
}
void alfabetico (char variavel){
    if((variavel >= 'a' && variavel <= 'z' )|| (variavel >= 'A' && variavel <= 'Z')){
        printf("E uma letra\n");
    }
    else{
        printf("Nao e uma letra\n");
    }

}
