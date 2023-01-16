  ##Crie um programa que leia dois valores e monte um menu na tela:

##[1] somar
##[2] multiplicar
##[3] maior
##[4] novos números
##[5] sair do programa

##Seu programa deverá realizar a operação solicitada em cada caso

n1 = int(input("Digite um número inteiro: "))
n2 = int(input("Digite outro número inteiro: "))
t = str(input("Deseja continuar? [S/N] ")).upper()

print("---MENU---")

print("""          [1] somar
          [2] multiplicar
          [3] maior 
          [4] novos números
          [5] sair do programa
""")
s = int(input("Digite a opção desejada: "))
while s != 5:
    if s == 1:
        print("A soma foi: {}".format(n1 + n2))
        print(t)
        if t == s:
            print(s)
        else:
            s == 5
    elif s == 2:
        print("A multiplicação foi de: {}".format(n1*n2))
    elif s == 3:
        if n1 > n2:
            print("O maior número é {}".format(n1))
        else:
            print("O maior número é {}".format(n2))
    
    
