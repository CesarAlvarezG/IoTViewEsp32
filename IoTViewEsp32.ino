/*
 * Desarrollado por: César Augusto Álvarez Gaspar
 * Proyecto iniciado en:  20/Dic/2017
 * Testeado en:
 *            +Tarjeta de desarrollo EASY KIT ESP32-C1 de Geekworm
 */

#include <dummy.h>
#include "configLocal.h"
#define LED_BUILTIN 27

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
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);
  if(Serial.available()>0)
  {
    Cadena=Serial.readStringUntil('\n');
    Serial.println(Cadena);
    int i =Cadena.toInt();
    Serial.println(i);
    float j=Cadena.toFloat();
    Serial.println(j); 
  }
}
