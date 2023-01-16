primeiro= int(input("Digite o primeiro termo da pa: "))
razao = int(input("Digite a razão da PA: "))
n = 11
contador = primeiro + (n - 1)*razao

for c in range(primeiro, contador, razao):
    print(c)
