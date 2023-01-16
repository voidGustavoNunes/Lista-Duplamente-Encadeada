#Escreva um programa que leia um número n inteiro qualquer e mostre na tela
#os n primeiros elementos de uma sequencia de fibonnaci
#ex: 0 -> 1 -> 1 -> 2 -> 3 -> 5 -> 8

print('SEQUÊNCIA DE FIBONACCI')
n = int(input("Digite um número inteiro qualquer: "))
        
primeiro_termo= 0                   #padrao
segundo_termo= 1                    #padrao
contador = 3                        #o contador comeca do 3 pois já existem
                                    #os dois primeiros termos
        
print('~'*30)
print('{} -> {}'.format(primeiro_termo, segundo_termo), end = ' ')
while contador <= n:
    terceiro_termo = primeiro_termo + segundo_termo
    print(' -> {}'.format(terceiro_termo), end = '')
    primeiro_termo = segundo_termo
    segundo_termo = terceiro_termo
    contador = contador + 1
print(' -> FIM')
