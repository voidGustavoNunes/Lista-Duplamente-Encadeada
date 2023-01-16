
def imprimirLinha(n):
    for n in range(1, n+1):
        print(("{}").format(n), end = "")
    print()

def imprimirlinhas(n):
    for n in range (n+1):
        imprimirlinhas(n)

numero = input("Coloque um numero: ")
imprimirlinhas(int(numero))
