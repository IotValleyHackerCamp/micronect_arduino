int sensorPin = A5;    // select the input pin photoresistor (LDR)
int sensorValue = 0;  // variable to store the value coming from the input Pin

void setup() {
   Serial.begin(9600); // chossing randomly 9600 baud as communication speed
   while (!Serial) {}; // wait for serial port to connect. Needed for native USB port only
}

void loop() {
  // read the value from the sensor Pin:
  sensorValue = analogRead(sensorPin);

  // print that sensor value over serial
  Serial.print(sensorValue);
  Serial.print("\n");
  delay(30);
}
