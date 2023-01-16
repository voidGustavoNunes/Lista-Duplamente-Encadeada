par =0
impar = 0

numero= int(input("Digite um número:  "))

while numero != "-1":
    if numero % 2 == 0:
        numero = par
        par = par + 1

    else:
        numero = impar
        impar = impar +1
        

    
print("A quantidade de números pares digitados é de: " %par)
print("A quantidade de números ímpares digitados é de:  "%impar)
print("O maior número digitado é: ")
print("A média dos números pares é de: ")
print("A média dos números ímpares é de: ")
print("A soma total de todos os números é de: ")
