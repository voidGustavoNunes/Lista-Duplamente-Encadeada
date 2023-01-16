def imprimir_linha(n):
    for n in range (1, n+1):
         print(("{}").format(n), end = " ")
    print()
    
def linha(n):
    for n in range (n+1):
        linha(n)
        
termo = input("quantos termos?: ")
linha(int(termo))
