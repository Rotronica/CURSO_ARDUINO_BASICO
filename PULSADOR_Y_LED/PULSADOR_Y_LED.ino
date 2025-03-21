/*
 * Autor: Calle Condori Rodrigo
 * -------Curso de Arduino básico e introducción a la comunicación Arduino Matlab----------
 * Organizado por SCEIEIE
 * El siguiente programa muestra el encendido de un led conectado al pin digital D13 mediante un pulsador 
 * pull down conectado al pin digital D4
 */
#define led 13  //Define el pin digital D13 como led
#define pulsador  4 //Define el pin digital D4 como pulsador
void setup() {
  pinMode(led,OUTPUT);    //El pin led esta configurado para dar permiso para generar una señal
  pinMode(pulsador,INPUT);  //El pin pulsador está configurado para recibir una señal digital del exterior
}

void loop() {
  if(digitalRead(pulsador)==1){   //Pregunta si se presiono el pulsador, si le llega 1 lógico
    digitalWrite(led,HIGH);   //Si esta presionado, por tanto enciende el led 
  }else{     //si no
    digitalWrite(led,LOW);  //El pin digital led esta apagado  
  }
}
