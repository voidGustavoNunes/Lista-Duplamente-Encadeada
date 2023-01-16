import random
#Gerar um numero aleatorio entre 1 e 100
def gerarnumaleatorio(min,max):
    return random.randint(min,max)


#par ou impar
def contadorImparePar(numero):
        if ((numero % 2 )== 0):
            return True
        
        else:
            return False

#funcao para a lista

def percorrerlista (vetNum, par, impar, contador):
    numero =0
    while (contador < 50):
        numero = vetNum[contador]

        if (contadorImparePar(numero) == True):
            par = par + 1

        else:
            impar = impar + 1

        contador = contador + 1
        
    print("-------------------------------------------------------")       
    print("A quantidade de pares é de: %d" %par)
    print("A quantidade de impares é de: %d" %impar)
    print("-------------------------------------------------------")


#-------------------------------------------------#

vetNum = []
impar = 0
par = 0
contador = 0
contador2 =0    

while (contador2 < 50):
    numero = gerarnumaleatorio(contador2,100)
    print(numero)
    vetNum.append(numero)
    contador2 +=1

percorrerlista (vetNum, par, impar, contador)
