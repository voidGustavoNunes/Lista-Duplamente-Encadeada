### EXEMPLO PARA O TRABALHO

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
    

contasfixo= []
saldodascontas= []


#2
def pesquisardado(contasfixo,pesquisar):
    i = 0
    while i < len(contasfixo):
        if contasfixo [i] == pesquisar:
            return i;
        else:
            i = i+1
    return -1


def remover_repetidos(contasfixo):
    n = []
    for i in contasfixo:
        if i not in n:
            n.append(n)
        n.sort()
        return  1

contasfixo = []
contasfixo = remover_repetidos(contasfixo)
print(contasfixo)
    

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
            
    print("Contas:%s "%contasfixo)
    print("Saldo:%s "%saldodascontas)   

# Se encontrar, então atualizar o vetor, na posição pesquisada,com os novos dados
    elif op == 3:
        print("n\nATUALIZAR\n\n")
        retorno = depositar(contasfixo, saldodascontas)
        if retorno == -1:
            print("Conta não encontrada, tente novamente")

    return op





