popA= 80000
popB= 200000
crescimentoA= 0.03
crescimentoB= 0.015
ano=0

while (popA < popB):
    ano= ano+1

    popA= popA+(popA*crescimentoA)
    popB= popB+(popB*crescimentoB)

if popA >= popB:
    print ("Em {} anos o país A irá ultrapassar o país B em questão de população.".format(ano,))
    print ("A população do país A é de: {:.0f}".format(popA))
    print ("A população do país B é de: {:.0f}".format(popB))
