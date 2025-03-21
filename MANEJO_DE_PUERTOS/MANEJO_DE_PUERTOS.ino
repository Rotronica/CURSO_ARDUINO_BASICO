/*
 * Autor: Calle Condori Rodrigo
 * ---Curso de Arduini básico e introducción a la comunicación Arduino Matlab---
 * -----------------------------------------------------------------------------
 * Organizado por SCEIEIE
 * El siguiente programa realiza dos secuencia y lo visualiza por el puertoD 
 */
void setup() {
  DDRD = 0XFF;  //Configura el puerto D Como salida
  PORTD = 0X00; //Limpiar el puerto D
}

void loop() {
  PORTD = 0X72; //Se prende los pines--> b'01110010' 
  delay(1000);  //Tiempo de visualización
  PORTD = 0X53; //Se prenden los pines--> b'01010011'
  delay(1000);  //Tiempo de visualización
}
