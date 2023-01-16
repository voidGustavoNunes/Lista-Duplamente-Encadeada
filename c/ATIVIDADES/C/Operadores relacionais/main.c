#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idadeJovem, idadeIdosa, idade;
    idadeJovem = 17;
    idadeIdosa = 60;
    idade = 0;

    printf("Digite a idade de uma pessoa: \n");
    scanf("%i",&idade);

    if (idade <= idadeJovem){
        printf("\nA idade informada e de uma pessoa jovem\n");

    }else{
        if (idade >= idadeIdosa){
            printf("\nA idade informada e de uma pessoa idosa\n");


        }else{
            if ((idade >= idadeJovem) && (idade<=idadeIdosa)){
                printf("\nA idade informada e de uma pessoa de meia idade\n");

            }
        }

    }

// caractere e: &&
// caractere ou: ||

    return 0;
}
