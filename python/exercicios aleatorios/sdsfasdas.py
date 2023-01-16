

def main():
    """
    primeira versão do programa que calcula m! / (n! (m - n)!)
    """

    print("Cálculo de binomial(m, n)")
    m = int(input("Digite o valor de m:"))
    n = int(input("Digite o valor de n:"))

    fatm = 1
    cont = 1
    while cont <= m:
        fatm *= cont
        cont += 1

    fatn = 1
    cont = 1
    while cont <= n:
        fatn *= cont
        cont += 1

    fatmn = 1
    cont = 1
    while cont <= (m-n):
        fatmn *= cont
        cont += 1

    binomial = fatm / (fatn * fatmn)
    print ("binomial(%d, %d) = %d" %(m, n, binomial))
    

# início da execução do programa
main()

