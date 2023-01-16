int pinoVermelho = 11;
int pinoAmarelo = 10;

void setup (){
  pinMode (pinoVermelho, OUTPUT);
  pinMode (pinoAmarelo, OUTPUT);
}


void loop (){
  digitalWrite(pinoVermelho, HIGH);  
  
  delay (1000);

  digitalWrite(pinoVermelho, LOW);

  digitalWrite(pinoAmarelo, HIGH);

  delay(1000);

  digitalWrite(pinoAmarelo, LOW);
  
}
