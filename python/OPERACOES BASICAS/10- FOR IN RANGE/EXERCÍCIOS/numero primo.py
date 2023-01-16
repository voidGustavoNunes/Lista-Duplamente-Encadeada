#faca um programa que leia um numero inteiro e diga se ele e ou nao um numero
#primo

numero = int(input("Digite um número inteiro: "))
contador = 0
for c in range(1, numero + 1):                                                       #ele vai calculando até o infinito se o numero e primo
    if numero % c == 0:                                                              #se o numero for divisivel pela sequencia do c
        print ("O número {}  não é um numero primo".format(numero))                  #se o resto da divisao do numero for 0, ele não é um numero primo
        contador += 1                                                                #
    else:
        print("O número {} é primo".format(numero))
    
