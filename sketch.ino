#include "DHT.h"                // Inclui a biblioteca do sensor

#define DHTPIN 15               // Pino que conecta ao DATA do sensor
#define DHTTYPE DHT22           // Tipo do sensor

DHT dht(DHTPIN, DHTTYPE);       // Instancia o sensor

void setup() {
  Serial.begin(115200);         // Inicializa a comunicação serial
  dht.begin();                  // Inicializa o sensor
}

void loop() {
  float t = dht.readTemperature();  // Lê a temperatura (°C)
  float h = dht.readHumidity();     // Lê a umidade (%)

  // Imprime os dados no monitor serial
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.print(" °C  |  Umidade: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000);  // Aguarda 2 segundos
}
