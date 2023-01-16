def ponto(coisa,casas=2):
  pedacos = coisa.split(",")
  return round(int(pedacos[0]) + (float(pedacos[1])/(10**len(pedacos[1]))),casas)
  

clientes = []
wcodigo = 1
while (wcodigo):
  wcodigo = int(input("Informe o codigo do cliente ou 0 para terminar"))
  if wcodigo:
    waltura = ponto(input("Informe a altura em metros"))
    wpeso = float(input("Informe o peso em quilos"))
    clientes.append( { 'Codigo': wcodigo, 'Altura': waltura, 'Peso':wpeso}  )

mais_alto = -1
mais_baixo = 999
mais_gordo = -1
mais_magro = 999

for x in clientes:
  if x['Altura'] > mais_alto:
    qual_mais_alto = x['Codigo']
    mais_alto = x['Altura']
  if x['Altura'] < mais_baixo:
    qual_mais_baixo = x['Codigo']
    mais_baixo = x['Altura']
  if x['Peso'] > mais_gordo:
    qual_mais_gordo = x['Codigo']
    mais_gordo = x['Peso']
  if x['Peso'] < mais_magro:
    qual_mais_magro = x['Codigo']
    mais_magro = x['Peso']

print()
print("O mais alto é",qual_mais_alto,"e mede",mais_alto)
print("O mais magro é",qual_mais_magro,"e pesa",mais_magro)
print("O mais baixo é",qual_mais_baixo,"e mede",mais_baixo)
print("O mais gordo é",qual_mais_gordo,"e pesa",mais_gordo)
