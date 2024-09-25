const int ledPin = 2;     // Pin donde está conectado el LED
const int pulsadorPin = 4;  // Pin donde está conectado el pulsador

void setup() {
  pinMode(ledPin, OUTPUT);       // Configura el pin del LED como salida
  pinMode(pulsadorPin, INPUT_PULLUP); // Configura el pin del botón como entrada con pull-up
}

void loop() {
  // Lee el estado del botón
  int estadoPulsador = digitalRead(pulsadorPin);

  // Si el botón es presionado (el estado es LOW)
  if (estadoPulsador == LOW) {
    digitalWrite(ledPin, HIGH);  // Enciende el LED
  } else {
    digitalWrite(ledPin, LOW);   // Apaga el LED
  }
}