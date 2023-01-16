#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    int num1, num2 , resultado;
    char x = '0';


    do{


        num1 = num2 = resultado = 0; //resetar as variaveis


        printf("    (1) somar\n");
        printf("    (2) subtrair\n");
        printf("    (3) dividir\n");
        printf("    (4) multiplicar\n");
        printf("    (0) sair do programa\n");

        printf("Informe a operacao: \n");
        printf(""); //precisei colocar esse printf pq senao no loop a operacao pulava
        x = getche(); //ele mostra a funcao que o usuario digitou -> espera o caractere digitado


        if (x != '0'){
            printf("\nDigite um numero: \n");
            scanf("%i", &num1);

            printf("Digite outro numero: \n");
            scanf("%i", &num2);

            if (x == '1'){
                resultado = num1 + num2;
                }else{
                    if (x == '2'){
                        resultado = num1 - num2;
                    }else{
                        if(x == '3'){
                            resultado = num1 / num2;
                        }else{
                            if (x == '4'){
                                    resultado = num1 * num2;
                            }
                        }

                    }


                    }


        }
            printf("O resultado e: %i\n", resultado);
            printf("\n");
            system("pause"); //parar o programa
            system("cls"); //limpar a tela

    }while(x!= '0');




    return 0;
}
