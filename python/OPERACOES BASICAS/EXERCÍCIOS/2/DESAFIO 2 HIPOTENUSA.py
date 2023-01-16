#### FAÇA UM PROGRAMA QUE LEIA O COMPRIMEIRO DO CATETO OPOSTO E DO CATETO
#### ADJACENTE DE UM TRIÂNGULO RETÂNGULO, CALCULE E MOSTRE O COMPRIMENTO DA
#### HIPOTENUSA

import math
catop = float(input("Digite o cateto oposto: "))
catadj = float(input("Digite o cateto adjacente: "))
b = catop
c = catadj
hipotenusa = (b ** 2) + (c ** 2)
hipotenusaa = math.sqrt(hipotenusa)

print("O comprimento da hipotenusa é de : {:.2f}".format(hipotenusaa))
