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
  WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);

    Serial.println("Setup done");
}

void loop() {
  Serial.println("scan start");

    // WiFi.scanNetworks will return the number of networks found
    int n = WiFi.scanNetworks();
    Serial.println("scan done");
    if (n == 0) {
        Serial.println("no networks found");
    } else {
        Serial.print(n);
        Serial.println(" networks found");
        for (int i = 0; i < n; ++i) {
            // Print SSID and RSSI for each network found
            Serial.print(i + 1);
            Serial.print(": ");
            Serial.print(WiFi.SSID(i));
            Serial.print(" (");
            Serial.print(WiFi.RSSI(i));
            Serial.print(")");
            Serial.println((WiFi.encryptionType(i) == WIFI_AUTH_OPEN)?" ":"*");
            delay(10);
        }
    }
    Serial.println("");

    // Wait a bit before scanning again
    delay(5000);
  /*
    for(int i=0;i<N_SENO;i++)
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
