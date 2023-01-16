#Escreva um programa que leia a velocidade de um carro. Se ele ultrapassar 80Km/h,
#mostre uma mensagem dizendo que ele foi multado. A multa vai custar R$7,00 por cada KM
#acima do limite.

velocidade= float(input("Digite a velocidade do carro: "))
multa = (velocidade - 80) * 7
if velocidade > 80:
    print("Você foi multado!!")
    print("Sua velocidade está acima de 80Km/h, então serão R$7,00 a cada Km acima do limite")
    print('-'*50)
    print('Sua multa é de: {}'.format(multa))
