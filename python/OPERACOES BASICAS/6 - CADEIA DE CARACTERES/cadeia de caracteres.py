frase = ("Curso de python")
print (frase[9])


###########

frase = str(input("Digite sua frase com mais de 9 caracteres: "))
print (frase[9])


######


frase = ("Xalacabuca xalacabá")
print (frase[9:13]) #essa função faz com que printe do caractere 9 ao 13

########

#função para ir pulando de 2 em 2 caracteres

frase = ("O dia está lindo mas o sol não apareceu, por isso o dia está lindo")
print (frase[9:21:2])


#######

frase [:5] #é onde vai terminar, ele começa do caractere 0

frase [15:] # ele irá começar do caractere 15 mas irá terminar somente no ultimo

frase [9::3] # ele irá começar no caractere 9, irá até o ultimo caractere de 3 em 3
