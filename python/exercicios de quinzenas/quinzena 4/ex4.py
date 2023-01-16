hora = float(input('Que horas são?  '))

if 0<= hora <5 :
    print('Vai dormir')

elif 5<= hora <12 :
    print('Bom dia')

elif 12<= hora <18:
    print('Boa tarde')

elif 18<= hora <24:
    print('Boa noite')

else:
    print('hora inválida')
