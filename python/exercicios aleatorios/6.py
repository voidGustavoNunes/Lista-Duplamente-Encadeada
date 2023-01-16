print('Tempo de uma viagem de carro')

dist = float(input('Qual a distância percorrida em km? '))
vel = float(input('Qual a velocidade média esperada para a viagem em km/h? '))

tempo = dist / vel


print('O tempo de viagem do carro será de: {:.2f} hrs'.format(tempo))
