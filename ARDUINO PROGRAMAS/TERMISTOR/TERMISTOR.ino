#include <Thermistor.h>

Thermistor temp(0); /* INDICA O PINO QUE ELE VAI ESTAR (ANALOGICO A0), DEVEMOS SEMPRE UTILIZAR A FUNCAO TEMP POR CONTA DA BIBLIOTECA */ 

void setup() {
  Serial.begin(9600); /* inicia a porta serial, configura a taxa de dados para 9600 bps */
}

void loop() {'
  int temperature = temp.getTemp(); /*GETTEMP TBM E DA BIBLIOTECA */
  Serial.println("Metodo Steinhart-Hart");
  Serial.print("Temperatura no Sensor eh: ");
  Serial.print(temperature);
  Serial.println("*C");
  delay(1000);
}
