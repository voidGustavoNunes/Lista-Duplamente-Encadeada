#define DO 300
#define RE 294
#define FA 349



int pinoVerde = 8;
int pinoVermelho = 13;
int pinoAmarelo = 2;

int pinoBuzzer = 6;
 


void setup() {
{
  pinMode(pinoBuzzer,OUTPUT);
  pinMode (pinoVerde, OUTPUT);
  pinMode (pinoVermelho, OUTPUT);
  pinMode (pinoAmarelo, OUTPUT);


  
}
}

void loop() {
  tone(pinoBuzzer, RE);
  digitalWrite(pinoVermelho, HIGH);
  delay(500);
  digitalWrite(pinoVermelho, LOW);

  tone(pinoBuzzer, DO);
  digitalWrite(pinoAmarelo, HIGH);
  delay(500);
  digitalWrite(pinoAmarelo, LOW);

  tone(pinoBuzzer, FA);
  digitalWrite(pinoVerde, HIGH);
  delay(500);
  digitalWrite(pinoVerde, LOW);




  

  
}
