#Crie um programa
#que leia vários números inteiros pelo teclado. O programa só
#vai parar quando o usuário digitar o valor 999, que é a condição de parada.
#no final, mostre quantos números foram digitados e qual foi a soma entre eles
#(desconsiderando o flag).

n = 0
contador = 0
soma = 0
n = int(input("Digite um número(para parar digite 999): "))
while n != 999:
    soma = soma + n
    contador = contador + 1
    n = int(input("Digite um número(para parar digite 999): "))
print('Foram digitados {} números e a soma foi de {}'.format(contador, soma))
print('FIM')
