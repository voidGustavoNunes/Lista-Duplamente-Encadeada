print('Valor do desconto de um produto e o preço a pagar')

nome=input('Nome do produto: ')
quant=int(input('Quantidade: ').replace(',','.'))
preço=float(input('Preço: ').replace(',','.'))
percent=float(input('Percentual de desconto: ').replace(',','.'))

valdesc=quant*preço*(percent/100)

print('O valor do desconto do produto é de:  R$ %.2f'%valdesc)

novoprec=(preço-valdesc)*quant

print('O preço a pagar é de:  R$ %.2f'%novoprec)
