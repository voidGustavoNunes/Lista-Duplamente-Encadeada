### EXEMPLO PARA O TRABALHO
### Gustavo Nunes Guedes



def menu() :
    op = -1
    while op < 0 or op > 6:
        print("SISTEMA BANCÁRIO")
        print("1-Inserir conta")
        print("2-Pesquisar por conta")
        print("3-Depositar")
        print("4-Maior Saldo")
        print("5-Excluir conta")
        print("6-Listar")
        print("0-Sair")
        op = int(input("Escolha sua opção: "))
    return op

contasfixo= []
saldodascontas= []

    
###### PRINCIPAL ##########

op = 1
while op != 0:
    op = menu()
    
    if op == 0:
        print("\n\nFim do programa!!!\n\n")
        
    elif op == 1:
        print("\n\nINSERIR CONTA\n\n")
        # Chamar a função para Inserir os dados nos vetores
        quantcontas= int(input("Quantas contas você irá adicionar: "))
        contador = 0
        

        while contador < quantcontas:
            numconta=int(input("Insira o número da conta que deseja armazenar: "))
            contasfixo.append(numconta)
            numsaldo=float(input("Insira o saldo da conta: "))
            saldodascontas.append(numsaldo)
            contador = contador + 1

def remover_repetidos(contasfixo):
    n = []
    for i in contasfixo:
        if i not in n:
            n.append(n)
        n.sort()
        return  1

contasfixo = []
contasfixo = remover_repetidos(contasfixo)

            
print("Contas:%s "%contasfixo)
print("Saldo:%s "%saldodascontas)   




def pesquisardado(contasfixo,pesquisar):
    i = 0
    while i < len(contasfixo):
        if contasfixo [i] == pesquisar:
            return i;
        else:
            i = i+1
    return -1



                    
    if op == 2:
        print("\n\nPESQUISAR POR CONTA\n\n")
        # Ler a informação para pesquisar
        pesquisar= int(input("Insira o número da conta que deseja pesquisar "))
            
        # Chamar a função para pesquisar no vetor
        pos = pesquisardado(contasfixo,saldodascontas,pesquisar)
        if pos >= 0:
            print("Conta encontrada: %s,Saldo: %s"%contasfixo[pos],%saldodascontas[pos])
        else:
            print("Dado não encontrado")
            

                       ########### DEPOSITAR ###########
                
# Ler a informação para pesquisar
def depositar(contasfixo, saldodascontas):
    
    contadeposito = int(input("Insira o número da conta para depósito: "))
    contador = 0    
# Chamar a função para pesquisar no vetor e ler os novos dados


    i = len(contasfixo)

    
    while contador < i:
        if contadeposito == contasfixo[contador]:
            print("Conta encontrada")
            valor = float(input("Insira o valor que deseja depositar: "))
            
            while valor <= 0:
                print("ERRO")
                valor = float(input("Insira o valor que deseja depositar: "))
            saldodascontas[contador] = saldodascontas[contador] + valor
            print("O valor foi depositado com sucesso")
            return 0
        
        else:
            contador = contador + 1
            
    return -1


# Se encontrar, então atualizar o vetor, na posição pesquisada,com os novos dados
    elif op == 3:
        print("n\nATUALIZAR\n\n")
        retorno = depositar(contasfixo, saldodascontas)
        if retorno == -1:
            print("Conta não encontrada, tente novamente")



def maiorsaldo(saldodascontas):
    if len(saldodascontas) < = 1:
        numero = saldodascontas[0]

    else:
        numero = saldodascontas[0]
        for i in range(1,len(saldodascontas)):
            if saldodasconta[i]>numero:
                numero = saldodascontas[i]
    return numero


    if op == 4:    
        print("\n\nMAIOR SALDO\n\n")
        retorno = maiorsaldo(saldodascontas)
            
        # Chamar a função para pesquisar no vetor o maior elemento
        print(numero)



    if op == 5:
        print("\n\nEXCLUIR CONTA\n\n")
        print(contasfixo)
        excluir= int(input("Informe a posição da conta que deseja excluir(EX: 1): "))
        i = len(contasfixo)


        if excluir == contasfixo[i]:
            print("conta encontrada")
            del contasfixo[excluir]
            return contasfixo
        else:
            ("conta não encontrada")

        

    if op == 6:
        print("\n\nLISTAR\n\n")
        # Listar todos os dados dos vetores
            print("Contas: "%contasfixo)
            print("Saldo das contas: "saldodascontas)

    else:
        print("Opção inválida!")

    input("Pressione <enter> para continuar ...")
    

 
        
