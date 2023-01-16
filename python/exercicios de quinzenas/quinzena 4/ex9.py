codigo = int(input("Digite o código do produto comprado:  "))
quant = int(input("Digite a quantidade comprada:  "))

if 1 <= codigo <= 10:
    preco = 10
elif 11 <= codigo <= 20:
    preco = 15
elif 21 <= codigo <= 30:
    preco = 20
else:
    preco =30

print("o preço da nota é de:R$  %.2f"%preco)
print("O preço do produto é de:R$  %.2f"%preco)

if preco < 250:
    desconto = preco*(5/100)

elif preco <500:
    desconto = preco*(10/100)

else:
    desconto = preco*(15/100)

print('O valor do desconto é de: R$  %.2f'%desconto)
print('O preço final é de: R$  {:.2f}'.format(preco - desconto))
