// Pin connected to the LED
const int ledPin = 13;

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn on the LED
  digitalWrite(ledPin, HIGH);

  // Wait for a short duration
  delay(100);

  // Turn off the LED
  digitalWrite(ledPin, LOW);

  // Wait for a short duration
  delay(100);
}