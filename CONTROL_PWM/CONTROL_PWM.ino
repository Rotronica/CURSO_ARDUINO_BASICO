const int pinPWM = 9;      // Pin PWM para el control del motor
const int pinPot = A0;      // Pin analógico para el potenciómetro
int valorPot = 0;           // Variable para almacenar el valor del potenciómetro
int valorPWM = 0;           // Variable para almacenar el valor PWM

void setup() {
  pinMode(pinPWM, OUTPUT);  // Configura el pin como salida
}

void loop() {
  valorPot = analogRead(pinPot);            // Lee el valor del potenciómetro (0-1023)
  valorPWM = map(valorPot, 0, 1023, 0, 255); // Mapea el valor a un rango de 0-255
  analogWrite(pinPWM, valorPWM);            // Escribe el valor PWM en el pin
  delay(10);                                // Pequeña pausa para estabilizar
}
