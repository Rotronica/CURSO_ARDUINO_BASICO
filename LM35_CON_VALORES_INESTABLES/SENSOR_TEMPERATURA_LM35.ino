//Sensor de temperatura LM35 sin datos promediados
//Las lecturas relizadas oscilan demasiado
uint16_t valor_adc;
static const int Vcc=5;
float V,Temp;
void setup() {
  Serial.begin(9600);
  Serial.println("Temperatura Ambiente");
}

void loop() {
  valor_adc = analogRead(A0);
  V = (valor_adc*Vcc)/(1024.0);
  Temp = V*100.0;
  if(Temp != 0){
    Serial.print("Temperatura:");
    Serial.print("\t");
    Serial.print(Temp);
    Serial.print("\t");
    Serial.println("Centigrados");
    delay(600); 
  }
  
}
