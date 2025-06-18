const int sensorPin = A0; // Pin analógico donde está conectado el sensor

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Lectura del valor analógico

  if (sensorValue > 200) {
    Serial.print("¡Vibración detectada! Valor: ");
    Serial.println(sensorValue);
  }
}
