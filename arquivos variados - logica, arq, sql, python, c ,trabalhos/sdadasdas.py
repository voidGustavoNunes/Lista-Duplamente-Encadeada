def lerVetor(v):
    i = 0
    while i < 20:
        n = int(input("Número: "))
        n.append(v)
        i= i+1

return

def maior(v):
    x = 0
    i= 1
    while i < len(v):
        if (v[i] > v[x]):
            x = i
        i = i+ 1
    return x

def imprimir(vetor):
    i = 0
    while i < len(v):
        print( v[i] )
        i = i +1


######
vetor = []
lerVetor(vetor)
p = maior(vetor)
imprimir(vetor)
print("Maior: %d" %vetor[p])
