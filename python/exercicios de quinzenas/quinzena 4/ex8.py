nome= str(input("Digite o nome do atleta:  "))
jurado1= float(input("Nota do jurado 1:  "))
jurado2= float(input("Nota do jurado 2:  "))
jurado3= float(input("Nota do jurado 3:  "))
jurado4= float(input("Nota do jurado 4:  "))
jurado5= float(input("Nota do jurado 5:  "))


if jurado1 > jurado2 and jurado3 and jurado4 and jurado5:
    jurado1 = 0
    print("sua maior nota foi a de {} ".format(jurado1))
elif jurado1 < jurado2 and jurado3 and jurado4 and jurado5:
    jurado1 = 0
    print("sua menor nota foi a de {} ".format(jurado1))

if jurado2 > jurado1 and jurado3 and jurado4 and jurado5:
    jurado2 = 0
    print("sua maior nota foi a de {} ".format(jurado2))
elif jurado2 < jurado1 and jurado3 and jurado4 and jurado5:
    jurado2 = 0
    print("sua menor nota foi a de {} ".format(jurado2))

if jurado3 > jurado1 and jurado2 and jurado4 and jurado5:
    jurado3 = 0
    print("sua maior nota foi a de {} ".format(jurado3))
elif jurado3 < jurado1 and jurado2 and jurado4 and jurado5:
    jurado3 = 0
    print("sua menor nota foi a de {} ".format(jurado3))

if jurado4 > jurado1 and jurado2 and jurado3 and jurado5:
    jurado4 = 0
    print("sua maior nota foi a de {} ".format(jurado4))
elif jurado4 < jurado1 and jurado2 and jurado3 and jurado5:
    jurado4 = 0
    print("sua menor nota foi a de {} ".format(jurado4))

if jurado5 > jurado1 and jurado2 and jurado3 and jurado4:
    jurado5 = 0
    print("sua maior nota foi a de {} ".format(jurado5))
elif jurado5 < jurado1 and jurado2 and jurado3 and jurado4:
    jurado5 = 0
    print("sua menor nota foi a de {} ".format(jurado5))
     
media= (jurado1+jurado2+jurado3+jurado4+jurado5/3)

print(nome)
print ("sua média é: %.2f"%media)


