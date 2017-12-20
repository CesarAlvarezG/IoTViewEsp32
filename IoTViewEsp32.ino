/*
 * Desarrollado por: César Augusto Álvarez Gaspar
 * Proyecto iniciado en:  20/Dic/2017
 * Testeado en:
 *            +Tarjeta de desarrollo EASY KIT ESP32-C1 de Geekworm
 */

#include <dummy.h>

#define LED_BUILTIN 27


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1000);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);
}
