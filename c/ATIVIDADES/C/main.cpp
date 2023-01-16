#include <stdlib.h>
#include <stdio.h>

/*Faça um programa para ler vários números positivos entre 1 e 1000, validar e só parar
quando o usuário digitar -1. No final imprima o maior número, a quantidade de números
pares e a quantidade de números ímpares, a média dos números pares e a média dos
números ímpares e a soma total de todos os números lidos*/

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



