print('Converter uma temperatura em Celsius para Fahrenheit')

C =float(input('Insira a temperatura em Celsius: ').replace(',', '.'))
F =(9*C/5+32)

print('Temperatura em Fahrenheit: {:.2f}'.format(F))

