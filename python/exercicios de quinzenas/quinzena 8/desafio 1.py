Crie um programa que leia o nome completo de uma pessoa e mostre:
    O nome com todas as letras maiuculas e minusculas
    Quantas letras ao todo  (sem considerar espaços)
    Quantas letras tem o primeiro nome




nome = input("Digite seu nome completo: ").strip()
print(nome.upper())

print(nome.lower())

print(len(nome.replace(' ', '')))

print(nome.find(' '))
