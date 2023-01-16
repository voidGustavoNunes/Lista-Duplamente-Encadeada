#define DO  300
#define RE  294
#define FA  349
#define SOL 392
 
int pinoBuzzer = 6;
 
int melodia[] = {
  DO, RE, DO, RE, FA, SOL
};
 
void setup() {
   // configura pino do buzzer como saída
  pinMode(pinoBuzzer,OUTPUT);
}
 
void loop() {
  for(int i=0; i<6; i++)
  {
    tone(pinoBuzzer, melodia[i]); /* devemos utilizar a função tone para os parametros do buzzer, definindo sua frequência e o pino onde ele está conectado */
    delay(500);
  }
}
