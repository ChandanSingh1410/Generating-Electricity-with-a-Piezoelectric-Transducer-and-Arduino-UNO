const int piezoPin = A0;  // Analog pin connected to the capacitor
const int ledPin = 9;    // Digital pin connected to the LED

void setup() {
  Serial.begin(9600);       // Initialize Serial Monitor
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
}

void loop() {
  int sensorValue = analogRead(piezoPin);       // Read voltage from the piezo
  float voltage = sensorValue * (5.0 / 1023);  // Convert to voltage (0-5V)

  Serial.print("Voltage: ");
  Serial.println(voltage);

  if (voltage > 2.0) {  // If the voltage exceeds 2V, turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);  // Delay for readability
}
