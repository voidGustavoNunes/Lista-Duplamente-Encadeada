#include <stdio.h>
#include <stdlib.h>

//CONTAR CARACTERES EM UMA STRING

int main()
{
    int tamanhoString (char frase[]);

    char frase[20];

    printf("Digite uma frase: ");
    scanf("%s", &frase);

    int num = tamanhoString(frase); //pra usar no printf utilizamos uma variavel num para pegar o valor da funcao

    printf("A string %s possui %i caracteres.", frase, num); //caracteres != letras

    return 0;
}
int tamanhoString(char string[]){

    int contador = 0;

    while(string[contador] != '\0'){ //lembrar de declarar o contador dentro da string
        contador++;

    }

    return contador + 1; //contador + 1 pois sao caracteres e caracteres contam o valor nulo
}













