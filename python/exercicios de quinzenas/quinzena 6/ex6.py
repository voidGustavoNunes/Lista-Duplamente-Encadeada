#Faça  um  programa  com  uma  função  chamada somaImposto com parametros: taxaImposto e valorCusto#
def somaImposto (taxaImposto, valorCusto):
    return(taxaImposto/100 +1 )*valorCusto

taxaImpost= float(input("Informe a taxa de imposto: "))
valorCust= float(input("Informe o valor de custo: "))

#A função retorna o valor de custo acrescentado com o imposto sobre vendas. 
print("O valor do produto com o imposto incluido é de: ", somaImposto(taxaImpost,valorCust))
