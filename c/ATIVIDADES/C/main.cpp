#include <stdlib.h>
#include <stdio.h>

/*Fa�a um programa para ler v�rios n�meros positivos entre 1 e 1000, validar e s� parar
quando o usu�rio digitar -1. No final imprima o maior n�mero, a quantidade de n�meros
pares e a quantidade de n�meros �mpares, a m�dia dos n�meros pares e a m�dia dos
n�meros �mpares e a soma total de todos os n�meros lidos*/

int main(){
	int i, media, impar, par, soma;
	int somaPar = 0;
	int somaImpar = 0;
	int totalNumeros =0 ;
	int mediaPar;
	int mediaImpar;
	int numero = 0;
	
	printf("Digite um numero: ");
	scanf("%i", &numero);
	
	int maior = -9999999;
	int menor = 9999999;
	
	while(numero <= 1000 && numero >= 1){
		if(numero != -1){
			printf("Digite um numero: ");
			scanf("%i", &numero);		
			if(maior < numero){
				maior = numero;
			}
			if(menor > numero){
				menor = numero;
				
			if(numero % 2 == 0){
				par = par + 1;
				somaPar= numero + somaPar;
			}
			else if(numero % 2 != 0){
				impar = impar + 1;
				somaImpar = numero + somaImpar;
			}
			mediaPar = somaPar / par;
			mediaImpar = somaImpar / impar;
			
			
			totalNumeros= totalNumeros + 1;	
			
			printf("Digite um numero: ");
			scanf("%i", &numero);
			}
		}
		
	}
	printf("O maior numero e: %i\n a quantidade de numeros pares e: %i\n a quantidade de numeros impares e: %i\n a media dos numeros pares e: %i\n a media dos numeros impares e: %i\n  a soma de todos os numeros citados: %i\n", &maior, &par, &impar, &mediaPar, &mediaImpar, &totalNumeros);
	
	return 0;
}



