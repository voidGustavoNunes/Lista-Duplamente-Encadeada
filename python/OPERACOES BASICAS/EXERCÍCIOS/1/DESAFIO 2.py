#PEGUE DUAS NOTAS DE UM ALUNO, CALCULE E MOSTRE SUA MÉDIA

nome= input("Digite seu nome: ")
nota1= int(input("Digite sua primeira nota: "))
nota2= int(input("Digite sua segunda nota: "))
media = (nota1 + nota2)/2

print("Olá {}, a média aritmética das suas notas foi de : {}".format(nome, media))
