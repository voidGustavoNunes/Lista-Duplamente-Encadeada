#Faca um programa que leia o ano de nascimento de um jovem e informe de acordo
#com sua idade: se ele ainda vai se alistar no servico militar
#Se e a hora de se alistar, se ja passou do tempo do alistamento

# Seu programa tambem devera mostrar o tempo que falta ou que passou do prazo
print("-"*50)
ano= int(input("Digite o seu ano de nascimento: "))
i = 2021 - ano

if i == 18:
    print("É hora de se alistar no serviço militar!!")

elif i < 18:
    print("Você ainda irá se alistar no serviço militar!")

else:
    print("Já passou da hora de se alistar hein!!")

print('-'*50)
