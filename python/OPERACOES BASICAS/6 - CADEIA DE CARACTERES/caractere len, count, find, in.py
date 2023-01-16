#o caractere len indica quantos caracteres tem a frase ex:

len(frase)


##### O count serve para contar quantas vezes em uma frase aparece uma letra x, ex:

frase.count('o')



frase.count('o', 0,13)

#vai ser com fatiamento, vai considerar a string do 0 ao 13, (lembrando que o 13
#não será incluído) e irá selecionar quantas letras 'o' tem 


##### o found mostra quantas vezes ele encontrou tal frase dentro da string ex:

frase.find("deo")

# no caso ele vai indicar a posição inicial que ele foi encontrado na string;

# se você colocar dentro do find uma string que não existe para ele procurar,
#ele irá retornar o valor ( -1 );


########

#também posso utilizar o operador in para pesquisar

'curso' in frase

# existe a palavra frase dentro da string curso? - se sim ele irá escrever true

#########################################

frase.upper()

#essa função irá aumentar as letras da frase

#######


frase.capitalize()

#essa função irá deixar todas as letras da frase em minúsculo, e a primeira letra
#da frase irá ser maisucula

#######################

frase.title()

#essa função irá aumentar a letra após os espaços, a cada espaço a próxima letra
#será maiuscula



