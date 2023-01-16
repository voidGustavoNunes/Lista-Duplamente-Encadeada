def fatorial (n):
    if n == 0:
        return 1

    else:
        return( n*fatorial(n-1))

#Inicio do programa
res = fatorial (10)
print("Fatorial = %d" %res)

