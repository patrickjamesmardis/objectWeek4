void setup() {
  Serial.begin(9600);

}

void loop() {
  float sensorVal = analogRead(A0);
  float volts = sensorVal * 5.0 / 1023.0;
  String message = String(sensorVal) + " = " + String(volts) + " V";
  Serial.println(message);
}
