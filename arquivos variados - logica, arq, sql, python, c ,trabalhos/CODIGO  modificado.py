#PROGRAMA EM PYTHON
#baseado no codigo original de Maker Tutor: https://github.com/jumejume1/pi-l298n-dc-motor/blob/master/l298n_dc.py
# e de Matt Hawkins: http://www.raspberrypi-spy.co.uk/

# codigo HC - SR04 : https://www.raspberrypiportugal.pt/sensor-ultrasonico-hc-sr04-raspberry-pi/

import time
import sys
import RPi.GPIO as G


# LEMBRAR ADICIONAR NO FINAL DO ARQUIVO ".PY";


G.setmode(G.BOARD)


GPIO_ECHO = 7
GPIO_TRIGGER = 25
in1 = 38
in2 = 37
ena = 40
in3 = 35
in4 = 36
enb = 32

t = 1 # PADRAO 1;


G.setup(GPIO_TRIGGER, GPIO.OUT)

G.setup(GPIO_ECHO, GPIO.IN)

G.ouput(GPIO_TRIGGER, G.LOW) #se der erro colocar false ao inves de low

G.setup(in1, G.OUT)

G.setup(in2, G.OUT)

G.setup(in3, G.OUT)

G.setup(in4, G.OUT)

G.setup(ena, G.OUT)
G.setup(enb, G.OUT)

G.output(in1, G.LOW)

G.output(in2, G.LOW)

G.output(in3, G.LOW)

G.output(in4, G.LOW)

p=G.PWM(ena, 1000)
q=G.PWM(enb, 1000)

p.start(24)
q.start(23)

print("\n A velocidade padrao e alta e para frente")

print("\n Digite -p para parar, -f para frente, -t para tras, -l para low, -m para medium e -h para velocidade high, digite -e para sair\n")

try:
    while(1):
        x = raw_input()

        G.output(GPIO_TRIGGER, True) #se der erro colocar false ao inves de low
        time.sleep(0.00001)
        G.output(GPIO_TRIGGER, False) #se der erro colocar false ao inves de low
        while G.input(GPIO_ECHO) == 0:
            start = time.time()
            if(x == 'f'):
                print("Voce escolheu ir para frente\n")

            if(t==1):
                G.output(in1, G.HIGH)
                G.output(in2, G.LOW)
                G.output(in3, G.HIGH)
                G.output(in4, G.LOW)
                print("O raspberry esta executando o programa\n")

            elif(x=='t'):
                print("Voce escolheu ir para tras\n")
                G.output(in1, G.LOW)
                G.output(in2, G.HIGH)
                G.output(in3, G.LOW)
                G.output(in4, G.HIGH)
                print("O raspberry esta executando o programa\n")

            
            elif(x=='l'):

                print("Valor low sendo executado\n")
                p.ChangeDutyCycle(20)
                q.ChangeDutyCycle(20)

            elif(x=='m'):

                print("O valor medium esta sendo executado\n")
                p.ChangeDutyCycle(50)
                q.ChangeDutyCycle(50)

                
           
            elif(x=='h'):
                
                print("Valor high sendo executado\n")
                p.ChangeDutyCycle(100)
                q.ChangeDutyCycle(100)

            
            elif(x=='p'):
                G.output(in1, G.LOW)
                G.output(in2, G.LOW)
                G.output(in3, G.LOW)
                G.output(in4, G.LOW)
               
                print("Voce escolheu parar\n")
               
            else:
                print("comando invalido\n")
        

        while G.input(GPIO_ECHO) == 1:
             stop = time.time()
             G.output(in1, G.LOW)
             G.output(in2, G.LOW)
             G.output(in3, G.LOW)
             G.output(in4, G.LOW)
        diferenca = stop - start
        distancia = (diferenca * 34300) / 2 #Distancia é igual ao tempo por velocidade dividido por 2
        print distancia
        time.sleep(1)
    except (x == 'e'):
        print "Você escolheu sair do programa"
        GPIO.cleanup()
        break

       



    
    
        
