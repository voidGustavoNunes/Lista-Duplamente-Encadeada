print('----Calculo Tempo de Viagem de Automovel----')

dist = float(input('Insira a Distancia a ser Percorrida: ').replace(',', '.'))
vel = float(input('Insira a velocidade media: ').replace(',', '.'))

tempo = dist / vel
min = (round(tempo % 1, 2))
min = (min * 60)

print('O tempo esperado da viagem é de {:.0f} horas e {:.0f} minutos'.format(tempo,min))
