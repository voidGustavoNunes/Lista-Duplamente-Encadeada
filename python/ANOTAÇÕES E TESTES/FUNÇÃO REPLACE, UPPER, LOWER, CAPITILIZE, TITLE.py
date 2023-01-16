## no replace, irá substituir, caso exista, a palavra que estará delimitada
## por exemplo, quero substituir a palavra 'python' por 'android':

frase.replace('Python', 'Android')
frase = ('curso em video de python')

## após executar será

frase = curso em video de android


##########

###função upper irá deixar as palavras da frase todas em maiusculo

###função lower deixara as palavras da frase todas em minusculo

frase.upper()
frase.lower()


###########

#### a função capitalize irá deixar maiusculo somente a primeira letra da string

ex: frase = curso de python

frase.capitalize()

frase = Curso de python


### já no title ele irá deixar maiusculo todas as palavras depois do espaço

ex: frase = curso de python

frase.title()

frase = Curso De Python
