#Desenvolva um programa que leia o primeiro termo e a razao de uma PA
#No final, mostre os 10 primeiros termos dessa progressao

print("---PROGRESSÃO ARITMÉTICA---")
primeiro= int(input("Digite o primeiro termo da PA: "))
razao= int(input("Digite a razão da progressão: "))
n = 11

contador = primeiro + (n - 1)*razao
contador = contador + 1


for c in range(primeiro, contador, razao):
    print(c)

print("FIM")
