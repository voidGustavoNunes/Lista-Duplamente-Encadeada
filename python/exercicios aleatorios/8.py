print('Converter uma temperatura em Fahrenheit para Celsius')

F =float(input('Insira a temperatura em Fahrenheit: ').replace(',', '.'))
C =((F-32)/1.8)

print('Temperatura em Celsius: {:.2f}'.format(C))
