#ex 2

#nome= str(input("Digite seu nome: "))
#idade= int(input("Digite sua idade: "))
#salário= float(input("Digite seu salário: "))
#sexo= str(input("Digite seu sexo(f ou m): "))
#estadocivil= str(input("Digite seu estado civil(use s, c, v ou d): "))
#estadocivil= estadocivil.upper ()

#while len(nome) < 3:
#    print("Erro!")
#    nome= str(input("Digite seu nome: "))
#
#    while 150 < idade < 0:
#        print("Erro!")
#        idade= int(input("Digite sua idade: "))
#
#        while salário < 0:
#            print("Erro!")
#            salário= float(input("Digite seu salário: %2.f"))
#
#            while sexo != "s" or sexo != "n":
#                print("Erro!")
#                sexo= str(input("Digite seu sexo: ('f' ou 'm')"))
#
#                while estadocivil != "s" or estadocivil != "c" or estadocivil != "v" or estadocivil != "d":
#                    print("Erro!")
#                    estadocivil= str(input("Digite seu estado civil: (use 's, c, v ou d')"))
#                    estadocivil= estadocivil.upper ()
#else:
#    print(nome)
#    print(idade)
#    print(salário)
#    print(sexo)
#    print(estadocivil)
#
print("----------------------------------------------------")

def nome_usuario():
    nome= str(input("Digite seu nome: "))
    while len(nome) < 3:
        print("Erro!")
        nome= str(input("Digite seu nome: "))
    return nome

def idade():
    idade= int(input("Digite sua idade: "))
    while 150 < idade < 0:
        print("Erro!")
        idade= int(input("Digite sua idade: "))
    return idade

def salario():
    salario= float(input("Digite seu salário: "))
    while salario < 0:
        print("Erro!")
        salario= float(input("Digite seu salário: %2.f"))
    return salario

def sexo():
    sexo= str(input("Digite seu sexo(f ou m): "))
    while sexo != "s" and sexo != "m":
        print("Erro!")
        sexo= str(input("Digite seu sexo: ('f' ou 'm')"))
    return sexo

def estadocivil():
    estadocivil= str(input("Digite seu estado civil(use s, c, v ou d): "))
    estadocivil.upper ()
    while estadocivil != "s" and estadocivil != "c" and estadocivil != "v" and estadocivil != "d":
        print("Erro!")
        estadocivil= str(input("Digite seu estado civil: (use 's, c, v ou d')"))
        estadocivil= estadocivil.upper()
    return estadocivil
    
#programa principal
nome = nome_usuario()
idade= idade()
salario = salario()
sexo = sexo()
estadocivil = estadocivil ()

print(nome)
print(idade)
print(salario)
print("Seu sexo é: %s "%sexo)
print("Seu estado civil é: %s "%estadocivil)

print("----------------------------------------------------")
