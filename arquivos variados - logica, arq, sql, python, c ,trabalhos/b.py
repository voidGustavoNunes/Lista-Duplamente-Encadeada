#PROGRAMA EM PYTHON
#baseado no codigo original de Maker Tutor: https://github.com/jumejume1/pi-l298n-dc-motor/blob/master/l298n_dc.py
# e de Matt Hawkins: http://www.raspberrypi-spy.co.uk/

# codigo HC - SR04 : https://www.raspberrypiportugal.pt/sensor-ultrasonico-hc-sr04-raspberry-pi/

import time
import sys
import RPi.GPIO as G


# LEMBRAR ADICIONAR NO FINAL DO ARQUIVO ".PY";

G.setmode(G.BOARD)


GPIO_ECHO = 37
GPIO_TRIGGER = 38
in1 = 5
in2 = 35
ena = 3
in3 = 7
in4 = 36
enb = 40


G.setup(GPIO_TRIGGER, G.OUT)

G.setup(GPIO_ECHO, G.IN)

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
    
    while(1):

        G.output(GPIO_TRIGGER, G.LOW) 
        time.sleep(0.00001)
        G.output(GPIO_TRIGGER, G.HIGH)
        time.sleep(0.00001)
        G.output(GPIO_TRIGGER, G.LOW)
        start = time.time()

        while G.input(GPIO_ECHO) == 0:
            start = time.time()
            print("\nO osorinho esta indo pra frente")
            G.output(in1, G.HIGH)
            G.output(in2, G.LOW)
            G.output(in3, G.HIGH)
            G.output(in4, G.LOW)


        while G.input(GPIO_ECHO) == 1:
            stop = time.time()
            G.output(in1, G.LOW)
            G.output(in2, G.LOW)
            G.output(in3, G.LOW)
            G.output(in4, G.LOW)
            print("\nO osorinho detectou um obstaculo e parou")

        diferenca = stop - start
        distancia = (diferenca * 34300) / 2 #Distancia é igual ao tempo por velocidade dividido por 2
        print (distancia)
        time.sleep(1)
        print("\nA ditancia percorrida foi de: {distancia}")

        
    except KeyboardInterrupt:
        print("\nVoce saiu do programa")
        G.cleanup()
        break
