# UM PROFESSOR QUE SORTEAR UM DOS SEUS QUATRO ALUNOS PARA APAGAR O QUADRO. FAÇA
# UM PROGRAMA QUE AJUDE ELE, LENDO O NOME DELES E ESCREVENDO O NOME DO ESCOLHIDO

import random
import math

print ("aluno 1 = 1")
print ("aluno 2 = 2")
print ("aluno 3 = 3")
print ("aluno 4 = 4")

aluno = random.randint(1,4)
print("O aluno escolhido para ser o responsável por apagar o quadro é o: {}".format(aluno))
