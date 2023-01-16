#Escreva um programa que faça o computador 'pensar' em um número inteiro entre#
#0 e 5 e peça para o usuário tentar descobrir qual foi o número escolhido pelo#
#computador. O programa deverá escrever na tela se o usuário venceu ou perdeu#


import random
num = random.randint(1,5)

a=int(input("Tente descobrir qual número o computador 'pensou'!! Digite aqui o número: "))
print("O número que o computador 'pensou' foi o: {}".format(num))

if a == num:
    print("Parabéns!! Você acertou!")

else:
    print("Você perdeu!!")
