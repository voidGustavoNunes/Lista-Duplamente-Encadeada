#SORTEAR A ORDEM DE APRESENTAÇÃO DE QUATRO ALUNOS E MOSTRAR A ORDEM SORTEADA
from random import shuffle

aluno1 = input("Digite o nome do aluno 1: ")
aluno2 = input("Digite o nome do aluno 2: ")
aluno3 = input("Digite o nome do aluno 3: ")
aluno4 = input("Digite o nome do aluno 4: ")

print('='*20)
print('SORTEANDO OS ALUNOS...')
print('='*20)

lista = [aluno1, aluno2, aluno3, aluno4]
shuffle(lista)
print("A ordem dos alunos sorteados será: {}" .format(lista))

