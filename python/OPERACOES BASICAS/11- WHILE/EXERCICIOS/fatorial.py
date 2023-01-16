#Faça um programa que leia um número qualquer e mostre o seu fatorial

print("FATORIAL")
n = int(input("Digite um número: "))
contador = n
fatorial = 1
while contador > 0:
    print('{}'.format(contador), end = ' ')
    print('x' if contador > 1 else '=', end = ' ')
    fatorial = fatorial * contador
    contador = contador - 1
    

print('{}'.format(fatorial))
