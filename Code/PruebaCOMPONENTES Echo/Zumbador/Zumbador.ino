const int ZumbadorPin = 13;     // Pin donde está conectado el Zumbador
const int pulsadorPin = 4;  // Pin donde está conectado el pulsador

void setup() {
  pinMode(ZumbadorPin, OUTPUT);       // Configura el pin del Zumbador como salida
  pinMode(pulsadorPin, INPUT_PULLUP); // Configura el pin del botón como entrada con pull-up
}

void loop() {
  // Lee el estado del botón
  int estadoPulsador = digitalRead(pulsadorPin);

  // Si el botón es presionado (el estado es LOW)
  if (estadoPulsador == LOW) {
    digitalWrite(ZumbadorPin, HIGH);  // Enciende el Zumbador
  } else {
    digitalWrite(ZumbadorPin, LOW);   // Apaga el Zumbador
  }
}