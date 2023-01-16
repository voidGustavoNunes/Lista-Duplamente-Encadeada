print('Aumento do salário')

salário=float(input('Valor do salário: ').replace(',','.'))
porcentagem=float(input('Porcentagem do aumento: ').replace(',','.'))

salárionovo=salário+(salário*(porcentagem/100))
print('o novo salário é de: R$ %.2f'%salárionovo)
