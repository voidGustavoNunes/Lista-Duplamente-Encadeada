def nota(n):
    contador =0
    continuar = []
    while continuar == "S":
        while contador < 3:
            n = float(input("Digite sua nota: "))
            contador += 1
            if nota < 0 or nota > 10:
                print("Erro!")
                n = float(input("Digite sua nota: "))
        s = input("Deseja continuar?(S/N): ")
        
def mediaNotas(media):
    if media >=7:
        print(media)

    else:
        print("REPROVADO")


#programa principal

n = []
media=((n[0] + n[1] + n[2])/3)
mediaNotas(media)
nota(n)
