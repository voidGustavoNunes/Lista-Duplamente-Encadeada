populacaoA,populacaoB,anos = 80000, 200000, 0
crescimentoA,crescimentoB = 0.03, 0.015
while populacaoA < populacaoB:
    anos += 1

populacaoA = populacaoA + (populacaoA * crescimentoA)
populacaoB = populacaoB + (populacaoB * crescimentoB)
if populacaoA >= populacaoB:
    print('Em %d a populacao A ira ultrapassar a populacaoB' % anos)
    print('Quantidade da populacao A e %r' % populacaoA)
    print('Quantidade da populacao B e %r' % populacaoB)
