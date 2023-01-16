#Crie um programa que leia duas notas de um aluno e calcule sua média, mostrando
#uma mensagem no final, de acordo com a media atingida:

#media abaixo de 5.0: REPROVADO
#media entre 5.0 e 6.9: RECUPERACAO
#media 7.0 ou superior: APROVADO

n1= float(input("Digite sua primeira nota: "))
n2= float(input("Digite sua segunda nota: "))
media = (n1+n2)/2

if media < 5.0:
    print("REPROVADO")

elif 5.0 <= media <= 6.9:
    print("RECUPERAÇÃO")

elif media > 7.0:
    print("APROVADO")
