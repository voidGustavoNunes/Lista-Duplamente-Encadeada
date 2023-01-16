numero1 = int(input('Digite um número aleatório:  '))
numero2 = int(input('Digite novamente um número aleatório:  '))
numero3 = int(input('Digite um  outro número:  '))

if numero1 > numero2 and numero1 > numero3:
    print('o maior número é o  ' ,numero1)

elif numero2 > numero1 and numero2 > numero3:
    print('o maior número é o  ' ,numero2)

elif numero3 > numero1 and numero3 > numero2:
    print('o maior número é o  ' ,numero3)



if numero1 < numero2 and numero1 < numero3:
    print('o menor número é o  ' ,numero1)

elif numero2 < numero1 and numero2 < numero3:
    print('o menor número é o  ' ,numero2)

elif numero3 < numero1 and numero3 < numero2:
    print('o menor número é o  ' ,numero3)



if numero1 > numero2 and numero2 > numero3:
    print(numero1, numero2, (numero3))

elif numero1 > numero3 and numero3 > numero2:
    print(numero1, numero3, (numero2))

elif numero2 > numero1 and numero1 > numero3:
    print(numero2, numero1, (numero3))

elif numero2 > numero3 and numero3 > numero1:
    print(numero2, numero3, (numero1))

elif numero3 > numero1 and numero1 > numero2:
    print(numero3, numero1, (numero2))

elif numero3 > numero2 and numero2> numero1:
    print(numero3, numero2, (numero1))



