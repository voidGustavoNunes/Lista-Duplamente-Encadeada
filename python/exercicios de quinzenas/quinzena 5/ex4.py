x = 1
par= 0
impar =0
mediapar= par

if numero != -1:
    p


while x <= 1000:
    numero= int(input("Digite um número de 1 a 1000(Digite -1 se quiser parar): "))
    while x <= numero:
        if (x%2) ==0:
            print ("%4d" %x)
        x = x+1
    if numero % 2 == 0:
        numero = par
        par = par + 1
        
    else:
        numero = impar
        impar = impar +1

print("Quantidade de números pares digitados: " %par)
print("Quantidade de números ímpares digitados:  "%impar)


if continuar= -1:
    print({" "},{" "},{" "} %numero, %par, %impar)

continuar=print("Deseja continuar?(S ou -1 para parar): ")
   



