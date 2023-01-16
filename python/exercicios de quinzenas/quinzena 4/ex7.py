areapintada=float(input("Digite o tamanho em m² da área a ser pintada:  "))
import math

quanttinta=(math.ceil(areapintada/54))
preco=80*quanttinta

print('a quantidade de latas de tinta a ser compradas será de: {}'.format(quanttinta))

print('o preço a ser pago é de: {}'.format(preco))
