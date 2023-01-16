print('Redução de vida de um fumante')

quant= int(input('Quantos cigarros fumados por dia você fuma? '))
anos= float(input('Há quantos anos você fuma/fumou? '))

percadevida=quant*(365*anos)
minutagem=percadevida*10

total=(minutagem/60)/24

print('Você perdeu %.2f dias de vida por causa do cigarro' %total)
print('Pare imediatamente!!!')
