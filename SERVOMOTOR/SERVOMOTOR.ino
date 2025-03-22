//Control de un servomotor 
//Este programa mueve el eje de 0 a 180 y de 180 a 0
#include <Servo.h>
#define servo1  9   //pin digital D9 definido con el nombre servo1
Servo myservo; //Crea el servo objeto para el cotrol del servo
int posicion = 0; //La posición del servo se almacena 
void setup() {
  myservo.attach(servo1);
}

void loop() {
  for(posicion = 0; posicion<=180; posicion++){
    myservo.write(posicion);
    delay(15);
  }
  for(posicion = 180; posicion>=0; posicion--){
    myservo.write(posicion);
    delay(15);
  }
}
