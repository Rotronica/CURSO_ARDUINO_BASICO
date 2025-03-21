/*
 * Autor: Calle Condori Rodrigo
 * --Curso de Arduio básico e itroducción a la comunicación Arduino Matlab--
 * -------------------------------------------------------------------------
 * Organzado por SCEIEIE
 * El siguiente programa visualiza un texto por el montor serial
 */
void setup() {
  Serial.begin(9600);   //Cofiguración de los Baudios
}

void loop() {
  Serial.println("Esto es una comunicacion Serial");  //Imprimir el mensaja por el monitor seria
  delay(500);
}
