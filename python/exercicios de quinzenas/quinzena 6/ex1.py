#ler nome de usuário:
#nome = str(input("Digite o nome de usuário: "))

#ler senha != nome de usuário, nem menor que 6 caracteres
#senha= str(input("Digite sua senha: "))

#while senha == nome or len(senha) < 6:
   # print("Inválido!")
   # senha= str(input("Digite sua senha: "))

#else:

   # print(nome)
   # print(senha)


#mostrar a mensagem de erro e voltar a pedir informações
#imprimir nome e senha
#usar a função len para pegar a quantodade de caracteres de uma string.


print("--------------------------------------------------------------")

def nome_usuario():
    nome= str(input("Digite o nome de usuário: "))
    return nome

def senha():
    senha= str(input( "Digite sua senha: "))
    while senha == nome or len(senha) < 6:
        print("Inválido!")
        senha= str(input("Digite sua senha: "))
    return senha

#programa principal#
nome = nome_usuario()
senha = senha()

print(nome)
print(senha)
