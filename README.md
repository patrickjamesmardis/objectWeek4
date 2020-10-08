# Week 4 | Analog Input

**[process.patrickjam.es/](https://process.patrickjam.es/2020/09/24/week-4-analog-read/)**

## [Part 1](/sketch1): Multimeter
![sketch1 breadboard](/documentationAssets/sketch1_bb.png)

Above is a sketch of the circuit used for the first part of this lab. The following code is used to display the voltage at the yellow wire. The 4 test points are row 9, where the wire is currently connected, row 13, row 17, and row 31 (the end of each resistor).

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

This program will return a value between 0 and 1023; however, we know the max voltage is 5 V. To convert the sensor value to volts, we multiply by $\frac{5}{1023}$. The program will bring both the sensor value and the voltage. Since each resistor is 220 ohm, the expected values are:

Test point 1: $\frac{4}{5}\cdot 5 = 4\text{ V} \cdot\frac{5}{1023} = 818.4$

Test point 2: $\frac{3}{5}\cdot 5 = 3\text{ V} \cdot\frac{5}{1023} = 613.6$

Test point 3: $\frac{2}{5}\cdot 5 = 2\text{ V} \cdot\frac{5}{1023} = 409.2$

Test point 4: $\frac{1}{5}\cdot 5 = 1\text{ V} \cdot\frac{5}{1023} = 204.6$

The following are the measured values. Each result has a percent error less that 1%.

Test point 1: 819 (0.073%)

Test point 2: 614 (0.033%)

Test point 3: 409 (0.049%)

Test point 4: 203 (0.782%)

## Part 2: LEDs in Parallel
Part 2 shows 5 LEDs in parallel and 5 resistors in sequence. Each LED (with increasing resistance) is dimmer than the preceding LED.

![sketch2 breadboard](/documentationAssets/sketch2_bb.png)
![sketch2 schematic](/documentationAssets/sketch2_schem.png)
