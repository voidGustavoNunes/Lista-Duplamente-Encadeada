#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz [3][3] = {{1, 2, 3},// uma matriz composta de 3 linhas e 3 colunas
                        {4, 5, 6},
                        {7, 8, 9}};



    printf("%i\n", matriz[2][0]); // a matriz vai de 0 a 2 nesse caso => linha 2 equivale a linha 3


    system("cls");

    //PARA LER UMA MATRIZ INTEIRA DEVE SE UTILIZAR O CICLO FOR DENTRO DE UM CICLO FOR

    int matrizUM [5][5] = {{1 ,2 ,3 ,4 ,5} ,
                         {6, 7 ,8 ,9 ,10 },
                         {11 ,12 ,13 ,14 ,15 },
                         {16 ,17 ,18 ,19 ,20 },
                         {21 ,22 ,23 ,24 ,25 }};

    for (int i = 0; i < 5; ++i){ //5 para linhas
        for (int j = 0; j < 5; ++j){ //5 para colunas
            printf("%i\t", matrizUM[i][j]);


        }
        printf("\n");
    }


    return 0;
}
