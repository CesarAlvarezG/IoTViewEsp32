/*
 * Desarrollado por: César Augusto Álvarez Gaspar
 * Proyecto iniciado en:  20/Dic/2017
 * Testeado en:
 *            +Tarjeta de desarrollo EASY KIT ESP32-C1 de Geekworm
 */

#include <dummy.h>
#include "WiFi.h"
#include "ConfigLocal.h"
#include "IoTEsp32.h"
#include "SenalesPrueba.h"

#define TPrueba 50

char host[]="iotview.herokuapp.com";

int status = WL_IDLE_STATUS;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_TEST, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED_TEST, LOW);
  Serial.begin(115200);
  Serial.println("IoTView en ESP32");
  Serial.println("Desarrollado por:");
  Serial.println("Ing. César Augusto Álvarez Gaspar");
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}

void loop() {
  Serial.print("connecting to ");
  Serial.println(host);
  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
        Serial.println("Conexion Exitosa");
        return;
    }else{
        Serial.println("Conexion exitosa");
      }

  
  /*  for(int i=0;i<N_SENO;i++)
    {
      Serial.println(PruebaSin[i]);
      delay(TPrueba); 
    }
    for(int i=0;i<N_ECG;i++)
    {
      Serial.println(EcgNormal[i]);
      delay(TPrueba); 
    }
    for(int i=0;i<N_ECG_ALETEO;i++)
    {
      Serial.println(EcgAleteo[i]);
      delay(TPrueba); 
    }
    for(int i=0;i<N_ECG_SINUSAL;i++)
    {
      Serial.println(EcgSinusal[i]);
      delay(TPrueba); 
    }*/
    
}
