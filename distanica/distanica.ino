const int trigPin = 13;
const int echoPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.0343 / 2;

  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);  // Espera 1 segundo antes de repetir
}
