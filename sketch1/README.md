# Sketch 1 | Multimeter

**[process.patrickjam.es/](https://process.patrickjam.es/2020/09/24/week-4-analog-read/)**

```c++
void setup() {
  Serial.begin(9600);
}

void loop() {
  float sensorVal = analogRead(A0);
  float volts = sensorVal * 5.0 / 1023.0;
  String message = String(sensorVal) + " = " + String(volts) + " V";
  Serial.println(message);
}

```

![sketch1 breadboard](/documentationAssets/sketch1_bb.png)