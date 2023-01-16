#fatos
#--------------------------------------------------------------#
# Faça  um  programa  com  uma  função  chamada somaImposto
# A  função  possui  dois parâmetros formais: taxaImposto,
# que é a quantia de imposto sobre vendas expressa em porcentagem
# e valorCusto, que é o custo de um item antes do imposto
#A função retorna o valor de custo acrescentado com o imposto sobre vendas.
# -------------------------------------------------------------#


def SomaImposto(TaxaImposto, custo):
    return (1+TaxaImposto/100) * custo
taxadeimposto = float(input("Digite a taxa do imposto: "))
taxadecusto = float(input("Digite o valor do custo: "))

#programa principal
print("O valor do custo com o imposto é de: ",SomaImposto(taxadeimposto,taxadecusto))
