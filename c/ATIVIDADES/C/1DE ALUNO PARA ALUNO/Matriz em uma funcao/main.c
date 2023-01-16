#include <stdio.h>
#include <stdlib.h>

//COMO DECLARAR UMA MATRIZ DENTRO DE UMA FUNCAO

int main()
{
    int funcaoMatriz(int x[3][3]);
    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    funcaoMatriz(matriz); //não precisa dos colchetes na hora de declarar

    system("pause");
    return 0;
}
int funcaoMatriz(int x[][3]){// é necessario colocar os colchetes e utilizar pelo menos as colunas
    int i, j;
    for (i = 0; i < 3; ++i){ // linha
        for (j = 0; j < 3; ++j){ //coluna
            printf("%i ", x[i][j]); //nao se usa "matriz" depois da virgula pois ela nao existe dentro da funcaoMatriz, somente o i e j;
        }
        printf("\n");
    }


}
