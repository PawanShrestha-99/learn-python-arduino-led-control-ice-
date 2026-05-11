// Python Controlled LED
// Upload this to Arduino ONE TIME, then control from Python forever!

void setup() {
  Serial.begin(9600);        // Start communication at 9600 baud
  pinMode(13, LED_BUILTIN);  // Set pin 13 as output (or use built-in LED)
  Serial.println("Arduino ready! Send '1' for ON, '0' for OFF");
}

void loop() {
  if (Serial.available() > 0) {        // Check if Python sent something
    char command = Serial.read();      // Read the command
    
    if (command == '1') {
      digitalWrite(13, HIGH);          // Turn LED ON
      Serial.println("LED turned ON");
    }
    else if (command == '0') {
      digitalWrite(13, LOW);           // Turn LED OFF
      Serial.println("LED turned OFF");
    }
  }
}
