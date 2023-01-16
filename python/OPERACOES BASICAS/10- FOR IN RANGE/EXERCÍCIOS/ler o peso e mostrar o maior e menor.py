#Faca um programa que leia o peso de 5 pessoas, no final, mostre qual foi o maior
#e o menor lidos
maior= 0
menor= 0

for c in range(1, 6):
    peso = float(input("Digite o peso da {}ª pessoa: ".format(c)))
    if c == 1:
        maior = c
        menor = c
    else:
        if peso > maior:
            maior = peso
        if peso < menor:
            menor = peso
print("O maior peso lido foi o de {}kg".format(maior))
print("O menor peso lido foi o de {}kg".format(menor))
