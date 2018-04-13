/*
 * Desarrollado por: César Augusto Álvarez Gaspar
 * Proyecto iniciado en:  20/Dic/2017
 * Testeado en:
 *            +Tarjeta de desarrollo EASY KIT ESP32-C1 de Geekworm
 */

#include <dummy.h>
#include "ConfigLocal.h"
#include "SenalesPrueba.h"

#define LED_BUILTIN 27
#define LED_TEST 0

#define TPrueba 50

String Cadena="";

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("IoTView en ESP32");
  Serial.println("Desarrollado por:");
  Serial.println("Ing. César Augusto Álvarez Gaspar");
 Cadena="";

}

void loop() {
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
    }
}
