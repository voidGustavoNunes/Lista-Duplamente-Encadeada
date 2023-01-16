litros= float(input('Insira quantos litros foram vendidos: '))
combustivel= str(input('Insira qual o tipo de combustível foi vendido codificado como: A-álcool e G-gasolina: '))


if combustivel == "A":
    alcool= 3.5
    

if combustivel == "G":
    gasolina= 3.9

custoalcool = litros*alcool

if litros <= 20:
    descontoalcool= (custoalcool*3)/100

    print("o preco a ser pago é: {}".format(descontoalcool1))

elif litro >20:
    descontoalcool2= (custoalcool*5)/100

    print("o preco a ser pago é: {}".format(descontoalcool2))

elif combustivel == "G":

    custogasolina= litros*gasolina

    gasolina= 3.9

if litros <= 20:
    descontogasolina1=(custo*4)/100

    print('o preço a ser pago é: {}'.format(descontogasolina1))

elif litro >20:
    descontogasolina2=(custo*6)/100

    print('o preço a ser pago é: {}'.format(descontogasolina2))
    
    
    
