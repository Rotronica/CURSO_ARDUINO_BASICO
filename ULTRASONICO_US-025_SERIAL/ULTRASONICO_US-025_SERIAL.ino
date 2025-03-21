//Código para un Sensor ultrasonico US-025
//Conexiones:
//                |
//  ARDUINO UNO Tx|<----Trig/Tx SENSOR ULTRASÓNICO
//              Rx|<----Echo/Rx
//             ___|
//____________/ 
void setup() {
  // Iniciar la comunicación serial a 9600 baudios
  Serial.begin(9600);
  Serial.println("ADC\tVoltaje (V)");
}

void loop() {
  // Enviar un comando al sensor para solicitar la medición
  // El comando es 0x55 (85 en decimal)
  Serial.write(0x55);

  // Esperar a recibir los datos del sensor
  if (Serial.available() >= 2) {
    // Leer los dos bytes de datos (high byte y low byte)
    byte highByte = Serial.read();
    byte lowByte = Serial.read();

    // Combinar los dos bytes para obtener la distancia en milímetros
    int distancia_mm = (highByte << 8) | lowByte;

    // Convertir la distancia a centímetros
    float distancia_cm = distancia_mm / 10.0;
    if(distancia_cm <=600){
        // Mostrar la distancia en el monitor serial
        Serial.print("Distancia: ");
        Serial.print(distancia_cm);
        Serial.println(" cm");
      }else{
          Serial.println("Esta fuera de su rango Maximo");
        }
  }

  // Esperar un momento antes de la siguiente medición
  delay(500);
}
