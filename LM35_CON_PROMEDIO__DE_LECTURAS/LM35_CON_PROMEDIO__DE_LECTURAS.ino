// Sensor de temperatura LM35
const int numMuestras = 10; // Número de muestras para promediar
static const int Vcc = 5;   // Voltaje de referencia (5V)

void setup() {
  Serial.begin(9600);
  Serial.println("Temperatura Ambiente");
}

void loop() {
  float sumaTemperaturas = 0;

  // Tomar varias muestras y promediarlas
  for (int i = 0; i < numMuestras; i++) {
    uint16_t valor_adc = analogRead(A0);
    float V = (valor_adc * Vcc) / 1024.0;
    float Temp = V * 100.0;
    sumaTemperaturas += Temp;
    delay(10); // Pequeño retardo entre muestras
  }

  // Calcular el promedio
  float temperaturaPromedio = sumaTemperaturas / numMuestras;

  // Mostrar la temperatura promedio
  Serial.print("Temperatura: ");
  Serial.print(temperaturaPromedio);
  Serial.println(" °C");

  // Esperar antes de la siguiente lectura
  delay(600);
}
