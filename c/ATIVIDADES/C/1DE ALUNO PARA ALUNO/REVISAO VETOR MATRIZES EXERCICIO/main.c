#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCICIOS
/*
    1)Escreva um programa que peca que o usuário digite dois números inteiros. O seu programa deve verificar se o primeiro numero e
    divisivel pelo segundo e retornar na tela do usuario uma mensagem apropriada a verificacao feita.

    2) Escreva um programa que inverta as cifras de um numero interio positivo digitado pelo usuario.

    3) Crie um programa que pede que o usuario digite 4 notas de 0 a 10(tipo float)
    de 4 alunos e os valores deverão ser armazenados em uma matriz bidimensional.
    Faca a media das notas de cada aluno e armazene as medias em um vetor. Por ultimo coloque na tela
    do usuario uma mensagem informando a medica de cada aluno.

*/

// EXERCICIO 1:
/*
int main()

{
    int num1, num2;

    printf("Digite um numero inteiro: \n");
    scanf("%i", &num1);
    printf("Digite outro numero inteiro: \n");
    scanf("%i", &num2);

    if (num1 % num2 == 0){
        printf("O %i e divisivel por %i pois o resto da divisao e 0", num1, num2);


    }else{
        printf("O %i NAO e divisivel por %i pois o resto da divisao e diferente de 0", num1, num2);
    }





    return 0;

}*/
// ================================================================
//EXERCICIO 2:


/*
int main(){
    int x, invertido;

    printf("Digite um numero para ser invertido: ");
    scanf("%i", &x);

    if (x >= 0){
    do{
        invertido = x % 10;
        printf("%i", invertido);
        x = x /10;



    } while (x != 0);
      printf("\n");
} else{
        x = x * -1;
    do{
        invertido = x % 10;
        printf("%i", invertido);
        x = x /10;



    } while (x != 0);
      printf("\n");
}

    return 0;
    }
*/

// EXERCICIO 3

int main(){

    float notaAluno[4][4]; // 4 linhas para alunos 4 linhas para notas

    printf("Digite 4 notas de 0 a 10 de 4 alunos: \n");
    for (int a = 0; a < 4; ++a){
        for(int n = 0; n < 4; ++n){
         scanf("%f\n", nota[a][n]);

        }
    }






    return 0;
}












