/*
 * Autor: Calle Condori Rodrigo
 * El siguiente programa realiza el parpadeo de un led conectado al pin digital D13
*/

#define led 13  //define el pin digital con el nombre led
void setup() {
  pinMode(led,OUTPUT); //El pin digital llamado led tiene permiso para generar una señal
}

void loop() {
  digitalWrite(led,HIGH); //El pin digital llamado led se activa
  delay(1000);            //se quda encendido durante 1 segudo
  digitalWrite(led,LOW);  //El pin digital llamado led se desactiva
  delay(1000);            //Se queda apagado durate 1 segundo
}
