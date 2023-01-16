def função():
    m= int(input("Digite um número(m):  "))
    n = int(input("Digite outro número menor que m:  "))
    while n >= m:
        print("ERRO!")
        n = int(input("Digite outro número menor que m:  "))

#-----------------------------------------------------------#    

    x = m
    fatorial =1
    contador = 1
    while contador < fatorial:
        contador += 1
        fatorial *= contador
    fatorialm = fatorial 

    x =n
    fatorial = 1
    contador =1
    while contador < fatorial:
        contador += 1
        fatorial *= contador
    fatorialn = fatorial 

#m!/((m-n)!. n!).

    x = m-n
    fatorial = 1
    contador =1
    while contador < fatorial:
        contador += 1
        fatorial *= contador
    fatorialmn= fatorial 

    print(m)
    print(n)
    print(fatorialm/(fatorialmn*fatorialn))

função()
