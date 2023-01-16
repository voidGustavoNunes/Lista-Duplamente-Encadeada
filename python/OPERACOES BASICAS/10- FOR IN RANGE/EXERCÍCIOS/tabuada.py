#Refaça o desafio 009
#Faça um programa que leia um numero inteiro qualquer e mostre na tela a sua tabuada


numero=int(input("Digite um numero para ver sua tabuada até o 10: "))

for c in range(1,11):
    print("{} x {} = {}".format(numero, c, numero*c))
