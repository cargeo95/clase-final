#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>

// Crear objeto para el sensor
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified();

void setup() {
  Serial.begin(9600);

  // Inicializar el sensor
  if (!accel.begin()) {
    Serial.println("No se encontró el ADXL345. Verifica la conexión.");
    while (1);
  }

  Serial.println("Sensor ADXL345 listo.");
}

void loop() {
  sensors_event_t event;
  accel.getEvent(&event);

  Serial.print("X: ");
  Serial.print(event.acceleration.x);
  Serial.print(" m/s² | Y: ");
  Serial.print(event.acceleration.y);
  Serial.print(" m/s² | Z: ");
  Serial.print(event.acceleration.z);
  Serial.println(" m/s²");

  delay(1000);
}
