// Definir los pines de conexión del sensor
const int trigPin = 9;  // Pin Trig del sensor
const int echoPin = 10; // Pin Echo del sensor

void setup() {
  // Iniciar la comunicación serial para mostrar los resultados
  Serial.begin(9600);

  // Configurar los pines del sensor
  pinMode(trigPin, OUTPUT); // Trig como salida
  pinMode(echoPin, INPUT);  // Echo como entrada
}

void loop() {
  // Medir la distancia
  long distancia = medirDistancia();

  // Mostrar la distancia en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Esperar un momento antes de la siguiente medición
  delay(500);
}

// Función para medir la distancia
long medirDistancia() {
  // Enviar un pulso corto al pin Trig
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Medir el tiempo que tarda en llegar el eco al pin Echo
  long duracion = pulseIn(echoPin, HIGH);

  // Calcular la distancia en centímetros
  // La velocidad del sonido es 343 m/s, que equivale a 0.0343 cm/μs
  // La distancia es ida y vuelta, por lo que se divide entre 2
  long distancia = duracion * 0.0343 / 2;

  return distancia;
}
