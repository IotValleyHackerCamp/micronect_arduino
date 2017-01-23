int sensorPin = A5;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
   Serial.begin(9600);
   while (!Serial) {}; // wait for serial port to connect. Needed for native USB port only
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);

  // print that sensor value over serial
  Serial.print(sensorValue);
  Serial.print("\n");
  delay(30);
}
