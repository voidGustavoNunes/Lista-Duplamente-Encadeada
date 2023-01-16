#validar o peso
def peso():
    peso = float(input("Qual o peso?  "))
    while peso < 0 or peso > 300:
        print("ERRO!")
        peso = float(input("Qual o peso?  "))
    return peso

#validar altura
def altura():
    altura = float(input("Informe sua altura:  "))
    while altura < 0 or altura > 3:
        print("ERRO!")
        altura = float(input("Informe sua altura:  "))
    return altura

#calcular IMC
def indice():
    IMC = (peso)/(altura * altura)
    if IMC < 18.5:
        print("ABAIXO DO PESO")
    elif 18.5 <= IMC < 25:
        print("PESO NORMAL")
    elif 25 <= IMC < 30:
        print("SOBREPESO")
    elif 30 <= IMC < 35:
        print("OBESO LEVE")
    elif 35 <= IMC < 40:
        print("OBESO MODERADO")
    elif IMC >= 40:
        print("OBESO MÓRBIDO")
    return IMC

#programa principal

peso = peso()
altura = altura()
IMC = indice ()

print(peso)
print(altura)
print(IMC)
