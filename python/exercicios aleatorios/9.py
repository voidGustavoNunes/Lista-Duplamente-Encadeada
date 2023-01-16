print('KM percorridos por carro alugado')

quant= float(input('Quantos km foi percorrido: ').replace(',','.'))
dias= int(input('Quantidade de dias que o carro foi alugado: '))

preço=(60*dias)+(0.15*quant)

print('O preço a se pagar pelo aluguel do carrro é de: R${:.2f}  '.format(preço))
