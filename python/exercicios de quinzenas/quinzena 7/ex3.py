#Faça  um  programa  que  gere  dois  vetores  com 20  números  aleatórios  em  cada
#(utilize  a função  implementada  nos  exercícios  anteriores). Faça  uma  função  que  gere  um  terceiro vetor de 40 elementos,
#cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores
#(essa função receberá os três vetores como parâmetros).Imprima os três vetores (faça somente uma função imprimir e chame-a três vezes).

#----------------------------------------------------------------------#

import random
#Gerar um numero aleatorio entre 1 e 100
def gerarnumaleatorio(min,max):
    return random.randint(min,max)


def primeirovetor(vetor1):
    contador = 0
    while contador < 20:
        numero1 = gerarnumaleatorio(1,100)
        vetor1.append(numero1)
        contador += 1
    print(vetor1)
    print("==================================================")


def segundovetor(vetor2):
    contador = 0
    while contador < 20:
        numero2 = gerarnumaleatorio(1,100)
        vetor2.append(numero2)
        contador += 1
    print(vetor2)
    print("================================================")

#funcao 40 elementos

def main(vetor1, vetor2, vetor1vetor2):
    n = 0
    while n < len(vetor1):
        numero = vetor1[n]
        vetor1vetor2.append(numero)
        numero = vetor2[n]
        vetor1vetor2.append(numero)
        n+= +1

    print(vetor1+vetor2)

#-----------------------------------------------------#

vetor1 = []
vetor2 = []
vetor1vetor2 = []
primeirovetor(vetor1)
segundovetor(vetor2)
main(vetor1, vetor2, vetor1vetor2)
