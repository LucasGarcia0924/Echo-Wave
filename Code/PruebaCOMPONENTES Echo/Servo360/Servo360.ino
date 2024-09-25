#include <ESP32Servo.h>  // Incluimos la biblioteca Servo para la ESP32

Servo miServo;  // Crea un objeto servo
const int servoPin = 14;  // Pin donde está conectado el servo
const int pulsadorPin = 4;  // Pin donde está conectado el pulsador

bool estadoPasadoPulsador = HIGH;  // Estado anterior del botón
bool servoEnMovimiento = false;  // Estado del servo

void setup() {
  miServo.attach(servoPin);  // Conectamos el servo al pin
  miServo.write(90);          // Detiene el servo al inicio
  pinMode(pulsadorPin, INPUT_PULLUP); // Configura el pin del botón como entrada con pull-up
}

void loop() {
  // Lee el estado actual del botón
  bool estadoActualPulsador = digitalRead(pulsadorPin);

  // Detecta el flanco de bajada (cuando se presiona el botón)
  if (estadoPasadoPulsador == HIGH && estadoActualPulsador == LOW) {
    if (!servoEnMovimiento) {
      // Mueve el servo hacia adelante
      miServo.write(180);  // Velocidad máxima hacia adelante
      delay(1000);         // Mantiene el movimiento por 1 segundo
      miServo.write(90);   // Detiene el servo
      servoEnMovimiento = true; // Cambia el estado
    } else {
      // Regresa el servo a la posición original
      miServo.write(0);    // Velocidad máxima hacia atrás
      delay(1000);         // Mantiene el movimiento por 1 segundo
      miServo.write(90);   // Detiene el servo
      servoEnMovimiento = false; // Cambia el estado
    }
  }

  estadoPasadoPulsador = estadoActualPulsador; // Actualiza el estado anterior del botón
}
