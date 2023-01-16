// Programa: Comunicacao Arduino com Raspberry Pi
// Autor: FILIPEFLOP
char buf;

void setup()
{
  Serial.begin(115200);
}
 
void loop()
{
  while (Serial.available() > 0)
  {
    buf = Serial.read();
    // Caso seja recebido o caracter L, envia uma mensagem
    if (buf == 'L')
    {
      // Envia a resposta para o Raspberry
      Serial.print("Recebido!");
    }
  }
}
