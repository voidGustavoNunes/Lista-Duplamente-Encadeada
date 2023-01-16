
const int vermelho = 3; //ledVermelho no pino 3
const int BotaoVermelho = 2; //botaoVermelho no pino 12
const int verde = 11; //ledVermelho no pino 11
const int BotaoVerde = 12; //botaoVerde no pino 12
const int amarelo = 6; //ledAmarelo no pino 6
const int BotaoAmarelo = 8; //botaoAmarelo no pino 8


int estadoBotaoVermelho; //Variavel para ler o status do pushbutton
int estadoBotaoVerde;
int estadoBotaoAmarelo;


void setup(){
    pinMode(vermelho, OUTPUT); //Pino do led será saída
    pinMode(BotaoVermelho, INPUT); //Pino com botão será entrada
    pinMode(verde, OUTPUT);
    pinMode(BotaoVerde, INPUT); 
    pinMode(amarelo, OUTPUT); 
    pinMode(BotaoAmarelo, INPUT); 
}

void loop(){
    estadoBotaoVermelho = digitalRead(BotaoVermelho); //le o estado do botão - HIGH OU LOW

    if (estadoBotaoVermelho == HIGH){ //Se botão estiver pressionado (HIGH)
        digitalWrite(vermelho, HIGH); // acende o led do pino 3.
    }
    else{ //se não estiver pressionado (LOW)
        digitalWrite(vermelho, LOW); //deixa o led do pino 3 apagado
    }


  estadoBotaoVerde = digitalRead(BotaoVerde);

  if (estadoBotaoVerde == HIGH) {
      digitalWrite(verde, HIGH);

  }
  else {
    digitalWrite(verde, LOW); 
    }


  estadoBotaoAmarelo = digitalRead(BotaoAmarelo);

  if (estadoBotaoAmarelo == HIGH) {
    digitalWrite(amarelo, HIGH);
    
    } 

  else {
    digitalWrite(amarelo, LOW);}
    } 
