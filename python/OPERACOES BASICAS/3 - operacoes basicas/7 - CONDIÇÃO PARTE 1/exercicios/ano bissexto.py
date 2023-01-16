#Faça um programa que leia um ano qualquer e mostre se ele é bissexto

ano= int(input("Digite o ano que quer verificar: "))
if ano % 4 == 0:
    print("O ano é bissexto!!")

else:
    print("O ano não é bissexto!")
    
