#gerar 50 numeros aleatorios

import random

def gerarnumaleatorio(min,max):
    return random.randint(min,max)

#par ou impar
def contadorImparePar(numero):
    if ((numero%2)==0):
        return True
    else:
        return False

def minha_funcao(vetNum, vetpar, vetimpar):
    numero = 0
    for x in range(50):
        numero = vetNum[x]

        if(contadorImparePar(numero)):
            vetpar.append(numero)

        else:
            vetimpar.append(numero)



           
    print("----------- VETOR PRINCIPAL -----------")
    print(sorted(vetNum, key=int))
    print("---------------------------------------")

    print("-----------VETOR IMPAR -----------")
    print(sorted(vetimpar, key=int))
    print("---------------------------------")

    print("-----------VETOR PAR -----------")
    print(sorted(vetpar, key=int))
    print("--------------------------------")

#-------------------------------------------#

vetNum = []
vetpar = []
vetimpar = []

for x in range(50):
    numero = gerarnumaleatorio(1,100)
    vetNum.append(numero)

minha_funcao(vetNum,vetpar,vetimpar)
