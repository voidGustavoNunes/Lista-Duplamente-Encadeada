#Desenvolva um programa que pergunte a distância de uma viagem em KM.
#calcule o preço da passagem, cobrando R$0,50 por KM para viagens de até
#200Km e R$0,45 para viagens mais longas.

import math

distancia=float(input("Digite a distância em Km: "))
if distancia <= 200:
    distancia = distancia*0.50
    print("A distância é menor ou igual a 200 KM, então o preço da passagem será de: {} reais".format(distancia))
else:
    distancia = distancia*0.45
    print("A distância é maior que 200 KM, então o preço da passagem será de: {} reais".format(distancia))
