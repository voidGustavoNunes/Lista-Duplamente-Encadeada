int pinoVermelho = 11;

void setup (){
 pinMode(pinoVermelho, OUTPUT);
  };

void loop(){
  acendeBrilho(5);
  apagaBrilho(5);
 };

void acendeBrilho(int increamento){
  for (byte value = 0; value <255; value += increamento){
    analogWrite(pinoVermelho, value);
    delay(100);
    }
  }

void apagaBrilho(int decreamento){
    for (byte value =255; value > 0; value -= decreamento){
     analogWrite(pinoVermelho, value); 
     delay(100);
     }
    }
