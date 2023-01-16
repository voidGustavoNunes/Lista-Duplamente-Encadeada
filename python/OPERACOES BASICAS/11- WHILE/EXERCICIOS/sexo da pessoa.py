#Faça um programa que leia o sexo de uma pessoa, mas só aceite os valores 'm'
#ou 'f'. Caso esteja errado, peça a digitacao novamente ate ter um valor correto

sexo= str(input("Digite o sexo de uma pessoa [M/F]: ")).upper()
while sexo != 'f' and 'm':
    sexo= str(input("Digite o sexo de uma pessoa [M/F]: ")).upper()
    
print("O sexo da pessoa é: {}".format(sexo))
    
