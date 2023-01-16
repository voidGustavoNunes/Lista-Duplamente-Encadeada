
##Crie um programa que leia dois valores e monte um menu na tela:

##[1] somar
##[2] multiplicar
##[3] maior
##[4] novos números
##[5] sair do programa

##Seu programa deverá realizar a operação solicitada em cada caso


n1 = int(input("Digite um número inteiro: "))
n2 = int(input("Digite outro número inteiro: "))
opcao = 0

while opcao != 5:
    print("""
    [1] somar
    [2] multiplicar
    [3] maior
    [4] novos números
    [5] sair do programa
    """)
    opcao = int(input("Qual a opção desejada? "))

    if opcao == 1:
        soma = n1 + n2
        print("A soma entre {} e {} é de {}".format(n1, n2, soma))

    elif opcao == 2:
        multiplicacao = n1 * n2
        print("A multiplicação entre {} e {} é de {}".format(n1, n2, multiplicacao))

    elif opcao == 3:
        if n1 > n2:
            print("O maior número entre os dois é: {}".format(n1))
        else:
            print("O maior número entre os dois é: {}".format(n2))

    elif opcao == 4:
        print("Informe os números novamente: ")
        n1 = int(input("Digite um número inteiro: "))
        n2 = int(input("Digite outro número inteiro: "))

    elif opcao == 5:
        print("Finalizando...")
        
    else:
        print("Opção inválida!! Tente novamnete")
    print("=-="*10)
print("Fim do programa")
        
