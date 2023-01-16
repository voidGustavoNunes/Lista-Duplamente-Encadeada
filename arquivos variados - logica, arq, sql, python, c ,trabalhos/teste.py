def lerNota():
    n = float(input("Nota: "))
    while n < 0 or n > 10:
        print("Nota inválida!")
        n = float(input("Nota: "))
    return n

def imprimir (x, y, z):
    print ("A média foi: %.2f" %x)
    print("Maior nota: %.2f" %y)
    print("Menor nota: %.2f" %z)

def calcMaior (m,n):
    if n > m:
        return n
    else:
        return m

def calcMenor (m,n):
    if n < m:
        return n
    else:
        return m

####

maior = 0.0
menor = []
media = 0.0
cont = 0
while cont <5:
    n = lerNota()
    maior = calcMaior(maior, n)
    menor = calcMenor(menor, n)
    media = maior + cont
    cont = cont +1

media = media / cont
imprimir(media, maior, menor)
