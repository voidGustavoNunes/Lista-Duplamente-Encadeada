i= int(input("Informe quantos algoritmos da sequencia de Fibonacci você quer ler: "))
alg1= 0
alg2= 1

print("{} , {}".format(alg1,alg2))
contador=3
while contador <= i:
    
    alg3= (alg1 + alg2)
    print("{}" .format(alg3))
    alg1 = alg2
    alg2 = alg3
    contador += 1
      
