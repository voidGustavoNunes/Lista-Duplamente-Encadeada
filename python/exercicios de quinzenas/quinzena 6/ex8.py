#Faça um programa que use a função valorPagamentopara determinar o valor
#a ser pago por  uma  prestação  de  uma  conta.
#O  programa  deverá  solicitar  ao  usuário  o valor  da prestação e
#o número  de  dias  em  atrasoe  passar  estes  valores  para  a
#função valorPagamento, que calculará o valor a ser pago e devolverá
#este valor ao programa que a chamou. O programa deverá então exibir
#o valor a ser pago na tela. Após a execução o programa  deverá
#voltar  a  pedir  outro  valor  de  prestação  e  assim  continuar
#até  que  seja informado um valor igual a zero para a prestação.
#Neste momento o programa deverá ser encerrado,  exibindo  o  relatório
#do  dia,  que  conterá  a  quantidade  e  o  valor  total  de prestações
#pagas  no  dia.  O  cálculo  do  valor  a  ser  pago  é  feito  da  seguinte
#forma.  Para pagamentos sem atraso, cobrar o valor da prestação.
#Quando houver atraso, cobrar 3% de multa, mais 0,1% de juros por dia de atraso. 

#-------------------------------------------------------------------------#

#valor a ser pago por uma conta
def valor_pagamento (prestacao,diasatraso):
    valor_pagamento = prestacao
    if diasatraso > 1:
        valor_pagamento = (prestacao + prestacao * 0.03 + diasatraso*0.01)
        print(valor_pagamento)
        return valor_pagamento
    
    else:
        valor_pagamento = prestacao
        print(valor_pagamento)
        return valor_pagamento

valordopagamento = []
diasatraso = 0
prestacoes = 0
total = 0
prestacao = 0


    
# ------------------programa principal--------------- #


def diasatraso():
    diasatraso = int(input("Informe o número de dias de atraso:  "))
    return diasatraso

#solicitar valor da prestação e numero de dias de atraso#
while True:
    prestacoes >= 1
    prestacao = float(input("Informe o valor da prestação:  "))
    diasatraso = int(input("Informe o número de dias de atraso:  "))
    if prestacao == 0:
        break
    valor.append(valor_pagamento(prestacao,diasatraso))

prestacoes <= 1
for c in range(prestacoes):
    valor_pagamento[1] <= total

print("Foram pagas %d prestações de: "%prestacoes,valor_pagamento)
print("No total, as prestações pagas somam: ", total)

