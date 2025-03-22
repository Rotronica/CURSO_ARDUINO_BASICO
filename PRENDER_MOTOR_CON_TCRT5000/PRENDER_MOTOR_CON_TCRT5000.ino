/*
 * Autor: Calle Condori Rodrigo
 * ----Curso Arduino básico e introducción a la comunicación Arduino-Matlab---
 * ---------------------------------------------------------------------------
 * Organizado por la SCEIEIE
 * El siguiente programa hce el uso del sensor TCRT 5000 
 * para detectar un obstaculo y si lo detecta prende un motor
 */
#define Sensor 4  //Define el pin Digital D4 con el nombre Senso
#define Motor 13  //Define el pin Digital D13 con el nombre Motor
void setup() {
  pinMode(Sensor,INPUT);  //Configura el pin Sensor como entrada de señal
  pinMode(Motor,OUTPUT);  //Configura el pin Motor como salida de señal del arduino
}

void loop() {
  if(digitalRead(Sensor)==0){   //Verifica si el sensor envia un 0 logico
    digitalWrite(Motor,1);      //Enciende el Motor
  }else{  //si no
    digitalWrite(Motor,0);      //Apagar el motor  
  }
}
