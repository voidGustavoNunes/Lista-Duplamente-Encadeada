nome = str(input("Digite o nome de usuário: "))
senha= str(input("Digite sua senha: "))

while senha == nome or len(senha) < 6:
    print("Inválido!")
    senha= str(input("Digite sua senha: "))

else:

    print(nome)
    print(senha)
