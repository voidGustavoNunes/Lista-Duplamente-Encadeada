faca um progrmaa que leia o nome de uma cidade e diga se ela comeca om o nome SANTO ou nao


cidade= str(input("Digite o nome de uma cidade: ")).strip().upper()
print(cidade[:5] == 'SANTO')


