# Water-Level-Sensor

The aim of this device is to assist individuals with hearing or vision impairments know when they have poured the equivalent of half a cup of liquid.

## Table of Contents

  1) Design Overview
  2) Demo Video
  3) Next Steps

## Design Overview
The two main electrical components of this design are an Arduino Uno R3 and a water level sensor. To connect the sensor to the Arduino, 3 wires are needed:
  1) Power Supply: Connect the VCC pin of the sensor to the 5V output of the Arduino.
  2) Ground: Connect the ground (GND) pin of the sensor to a GND on the Arduino.
  3) Signal Output: Connect the output pin of the sensor to a digital input pin on the Arduino.

Once the 3 wires are connected, use another pin on the Arduino as a digital output pin and connect a buzzer and a red LED in series from the output pin to another GND. To use the sensor, run the program and place the water-level sensor in the measuring cup. Then pour in the liquid you are measuring and when the desired amount is reached (1/2 cup, 3/4 cup etc.), the buzzer will sound and the LED will light up as well. The light will help people with hearing impairments and the buzzer will help those with vision impairments know exactly when the amount has been reached.

One important note about using the water-level sensor is that its design makes it very sensitive to the angle that it is placed at in the measuring cup. If the water sensor is not at a 90 degree angle to the cup, then the reading will be incorrect and the wrong measurment will be recorded. This is why it is important to place the sensor as vertical (90 degrees) as possible and prevent it from sliding when the liquid is being poured.

## Demo Video
https://github.com/user-attachments/assets/6522bce5-d4ce-40b7-8a01-45e1c1a8e526

## Next Steps
To further advance this project, its versatility should be expanded. Currently, the sensor only works for readings of 1/2 a cup. A simple change would be to calibrate sensor to also detect 1/4 cup, 3/4 cup and other useful measurments that are found in recipies. If all of these readings are added, it could become hard for people with vision impairments to know exactly what measurment they are currently at when their only indicator is a buzzer. To make it more clear what measurment has been reached, the buzzer can be replaced with a speaker that announces the current amount of liquid in the cup. As well, more LED's can be added and programmed to light up for different measurements.
