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


Once this has been done, use another pin on the Arduino as a digital output pin and connect a buzzer and a red LED in series from the output pin to another GND.
1. **Setup**:
   - **Container Preparation**: Use a container with clearly marked levels, indicating half a cup. The container should be calibrated so that the sensor can accurately detect this volume.
   - **Sensor Placement**: Place the sensor at the specific height corresponding to half a cup of liquid in the container. Ensure that the sensor is securely positioned to detect the liquid level accurately.


3. **User Interaction**:
   - The user pours liquid into the container until the buzzer sounds, indicating that the liquid level has reached half a cup. The LED provides additional visual confirmation of the sensor’s status.

**Conclusion:**
By incorporating auditory feedback and clear level markings, the water level detection system can be effectively used by vision-impaired individuals to measure specific volumes of liquid, such as half a cup. This adaptation enhances the usability of the sensor and provides a practical solution for accessible liquid measurement.
  
## Demo Video

## Next Steps
