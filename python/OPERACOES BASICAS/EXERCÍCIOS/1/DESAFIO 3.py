print("="*50)
nome = input("Digite seu nome: ")
print("Olá {}, como está hoje?".format(nome))
metros= float(input("Digite o valor em metros que deseja converter: "))
centimetros= metros / 100
milimetros = metros / 1000

print("O valor em metros é de: {:.2f}\n O seu valor convertido para centímetros é de: {:.2f} \n E em milímetros {:.2f}".format(metros, centimetros, milimetros))

print("="*50)
