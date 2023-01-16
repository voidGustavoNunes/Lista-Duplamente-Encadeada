idade= float(input("Digite sua idade:  "))
peso= float(input("Digite seu peso:  quilos"))


if idade >= 12 and peso >= 60:
    print("Você deve tomar 40 gotas do medicamento por dose")

elif idade >= 12 and peso < 60:
    print("Você deve tomar 34 gotas do medicamento por dose")

elif idade < 12 and peso >= 5 and peso <= 9:
    print("Você deve tomar 5 gotas do medicamento por dose")

elif idade < 12 and peso >= 9.1 and  peso <= 16:
    print("Você deve tomar 10 gotas do medicamento por dose")

elif idade < 12 and peso >= 16.1 and  peso <= 24:
    print("Você deve tomar 15 gotas do medicamento por dose")

elif idade < 12 and peso >= 24.1 and peso <= 30:
    print("Você deve tomar 20 gotas do medicamento por dose")

else:
    print("Você deve tomar 30 gotas do medicamento por dose")
