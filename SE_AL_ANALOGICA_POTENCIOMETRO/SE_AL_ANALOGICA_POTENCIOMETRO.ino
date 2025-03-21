int valor_adc;
static const int Vcc = 5; // Voltaje de referencia (5V en la mayoría de las placas Arduino)

void setup() {
  // Iniciar la comunicación serial a 9600 baudios
  Serial.begin(9600);

  // Encabezado de las columnas
  Serial.println("ADC\tVoltaje (V)"); // \t es un tabulador
}

void loop() {
  // Leer el valor del ADC (0-1023)
  valor_adc = analogRead(A0);

  // Calcular el voltaje
  float V = (valor_adc * Vcc) / 1024.0;

  // Mostrar los valores en dos columnas
  Serial.print(valor_adc);      // Mostrar el valor del ADC
  Serial.print("\t");     // Separador de columnas (tabulador)
  Serial.println(V);      // Mostrar el voltaje y saltar a la siguiente línea

  // Esperar un momento antes de la siguiente lectura
  delay(500);
}
