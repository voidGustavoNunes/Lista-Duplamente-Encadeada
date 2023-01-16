Faça um programa que leia o nome completo de uma pessoa, mostrnado em seguida
o primeiro e o ultimo nome separadamente

nome = str(input("Digite seu nome completo: ")).strip()
nome = nome.split()
print(nome[0])
print(nome[len(nome)-1])
