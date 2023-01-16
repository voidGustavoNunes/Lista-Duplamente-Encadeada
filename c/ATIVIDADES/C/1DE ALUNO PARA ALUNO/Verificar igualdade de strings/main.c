#include <stdio.h>
#include <stdlib.h>

int main()
{
    _Bool igualdadeString(char s1[], char s2[]);

    int num;

    char s1[20]; char s2[20];

    printf("Digite uma frase: ");
    scanf("%s", &s1);
    printf("\n");

    printf("Digite outra: ");
    scanf("%s", &s2);
    printf("\n");

    num = igualdadeString(s1, s2);

    if (num == 1){
        printf("As frases sao iguais\n");

    }else{
        printf("As frases nao sao iguais\n");
    }

    return 0;
}

_Bool igualdadeString(char s1[], char s2[]){

    int i = 0;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2 != '\0'){
        ++i;

    };

    if(s1[i] == '\0' && s2[i] == '\0'){
        return 1;

    }else{
        return 0;
    }

}



