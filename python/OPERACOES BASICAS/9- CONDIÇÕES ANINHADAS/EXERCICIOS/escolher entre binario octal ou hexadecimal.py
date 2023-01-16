#Escreva um programa que leia um número inteiro qualquer e peça para o usuário
#escolher qual sera a base de conversao:
#1 para binario
#2 para octal
#3 para hexadecimal
import math


a= int(input("Digite um número inteiro: "))
binario = a
b= int(input("Escolha qual será a base de conversão: 1 para binário, 2 para octal e 3 para hexadecimal: "))
       
if b == 1:
    binario = bin(binario) #binario
elif b == 2:
    binario = oct(binario) #octal
elif b == 3:
    binario = hex(binario) #hexadecimal
else:
    print("Número inválido")

print("O número {} convertido será {}!!".format(a,binario))
