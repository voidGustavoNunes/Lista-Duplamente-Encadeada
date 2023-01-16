soma =0
contador= 0

for c in range(1,7):
    num = int(input("Digite o {} valor: ".format(c)))
    soma += num
    contador += 1
print("Você informou {} números e a soma foi {}".format(contador, soma))

