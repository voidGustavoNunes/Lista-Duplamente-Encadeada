nome= str(input("Digite seu nome: "))
nota1=float(input("Digite sua primeira nota: "))
nota2=float(input("Digite sua segunda nota: "))
nota3=float(input("Digite sua terceira nota: "))
media= nota1 + nota2 + nota3/3

while nota1 and nota2 and nota3 < 0:
    print("Erro!")
    nota1=float(input("Digite sua primeira nota: "))
    nota2=float(input("Digite sua segunda nota: "))
    nota3=float(input("Digite sua terceira nota: "))

if media >= 7:
    print("APROVADO")

elif media > 6:
    print("REPROVADO")

elif 6 <= media < 7:
    print("PROVA FINAL")
