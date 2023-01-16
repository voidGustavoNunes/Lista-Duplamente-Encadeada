#imprimir:
#1
#2 2
#3 3 3
#.....
#n nnnnn... n

# n é informado pelo usuario
# usar uma funcao para validar o valor de n (inteiro e positivo)
# uma função para imprimir somente uma linha
# uma função para imprimir ate a n linha

print(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ")


n= int(input("Quantos termos?:  "))

def imprimir_linha():
    for numero in range (1, n+1):
        contador = 1
        while True:
            print(numero, end = "")
            if contador == numero:
                break
            contador += 1
        print()
n = imprimir_linha()

print(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ")
