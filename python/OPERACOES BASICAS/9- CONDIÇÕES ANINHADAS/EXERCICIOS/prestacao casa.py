#Escreva um programa para aprovar o empréstimo bancário para a compra de uma casa..
# O progrmaa vai perguntar o valor da casa, o salário do comprador e em quantos
# anos ele vai pagar
# Calcule o valor da prestação mensal, sabendo que ela não pode exceder 30%
# do salário ou então o emprestimo sera negado

import math
casa = float(input("Digite o valor da casa: "))
salario = float(input("Digite o salário do comprador: "))
anos = float(input("Em quantos anos ele irá pagar? "))
valorprestacao= casa/anos

if valorprestacao > salario*0. 30:
    print("O valor da parcela é maior que 30% do seu salário, então o empréstimo foi negado")

else:
    print("Você irá pagar {} por mês".format(valorprestacao))
