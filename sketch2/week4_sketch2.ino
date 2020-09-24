void setup() {
  Serial.begin(9600);
  size(800, 800);
  backgroundColor(0, 0, 255);
}

void loop() {
  int sensorVal = analogRead(1);
  int bVal = sensorVal % 255;
  backgroundColor(0, 0, bVal);
}
