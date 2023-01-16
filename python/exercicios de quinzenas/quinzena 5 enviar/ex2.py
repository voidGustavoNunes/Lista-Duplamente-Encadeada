nome= str(input("Digite seu nome: "))
idade= int(input("Digite sua idade: "))
salário= float(input("Digite seu salário: "))
sexo= str(input("Digite seu sexo(f ou m): "))
estadocivil= str(input("Digite seu estado civil(use s, c, v ou d): "))
estadocivil= estadocivil.upper ()

while len(nome) < 3:
    print("Erro!")
    nome= str(input("Digite seu nome: "))

    while 150 < idade < 0:
        print("Erro!")
        idade= int(input("Digite sua idade: "))

        while salário < 0:
            print("Erro!")
            salário= float(input("Digite seu salário: %2.f"))

            while sexo != "s" or sexo != "n":
                print("Erro!")
                sexo= str(input("Digite seu sexo: ('f' ou 'm')"))

                while estadocivil != "s" or estadocivil != "c" or estadocivil != "v" or estadocivil != "d":
                    print("Erro!")
                    estadocivil= str(input("Digite seu estado civil: (use 's, c, v ou d')"))
                    estadocivil= estadocivil.upper ()
else:
    print(nome)
    print(idade)
    print(salário)
    print(sexo)
    print(estadocivil)
                    
