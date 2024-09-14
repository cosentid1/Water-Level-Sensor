# Water-Level-Sensor

The aim of this device is to help people with hearing or vision impairments know when they have poured the equivalent of half a cup of liquid.

## Table of Contents

  1) Design Overview
  2) Demo Video
  3) Next Steps

## Design Overview
The two main electrical components of this design are an Arduino Uno R3 and a water level sensor. To wire up the sensor to the Arduino, 3 wires are needed:
  1) Power Supply: Connect the VCC pin of the sensor to the 5V output of the Arduino.
  2) Ground: Connect the ground (GND) pin of the sensor to a GND on the Arduino.
  3) Signal Output: Connect the output pin of the sensor to a digital input pin on the Arduino.

Once this has been done, use another pin on the Arduino as a digital output pin and connect a buzzer and a red LED in series from the output pin to another GND. If all of this has been wired correctly, when the program is run, the buzzer and LED should light up once the sensor has recieved a reading that is above the threashold set in the code.

One important note about using the water-level sensor is that it's design makes it very sensitive to the angle that it is placed at in the measuring cup. If there is too much of an angle, then the reading will be off nad the wrong measurment will be recorded. This is why it is important to place the sensor as verticle as possible and prevent it from sliding when the liquid is beign poured.

## Demo Video

## Next Steps
