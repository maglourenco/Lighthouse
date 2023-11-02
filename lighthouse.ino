const int ledPin = 9; // LED connected to digital pin 9
int brightness = 0;   // Initial brightness
int fadeAmount = 4;   // Amount to fade in/out (change this value to adjust speed)

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  analogWrite(ledPin, brightness); // Set the LED brightness

  // Small delay before start fading
  if (brightness <= 0) {
    delay(1000);
  }

  brightness += fadeAmount; // Increment or decrement brightness

  // Reverse the direction of fading when the brightness reaches its limits
  if (brightness <= 0 || brightness >= 220) {
    fadeAmount = -fadeAmount;
  } 

  delay(30); // Small delay for smooth fading
}
