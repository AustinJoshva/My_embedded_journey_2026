# Traffic Light

This is an Arduino project I made to simulate a basic traffic light system using three LEDs.

The LEDs represent the three traffic light signals: red, yellow, and green. Each light turns ON one after another, with a delay of 3 seconds between each change.

## Components Used

* Arduino Uno
* Red LED
* Yellow LED
* Green LED
* 3 × 1KΩ Resistors
* Breadboard
* Jumper Wires

## How It Works

The three LEDs are connected to separate digital output pins on the Arduino through 1KΩ resistors.

The Arduino turns the red LED ON first. After 3 seconds, it turns the red LED OFF and the yellow LED ON. After another 3 seconds, the yellow LED turns OFF and the green LED turns ON.

After the green light stays ON for 3 seconds, the sequence starts again with the red LED.

The sequence repeats continuously:

**Red → Yellow → Green → Red**

## What I Learned

While making this project, I learned:

* How to control multiple LEDs using Arduino.
* How to use multiple digital output pins.
* How **digitalWrite()** is used to turn LEDs ON and OFF.
* How **delay()** can be used to control the timing of a sequence.
* How a simple sequence can be used to simulate a real-world system.

## How to Run

1. Connect the red, yellow, and green LEDs to separate digital pins.
2. Connect a 1KΩ resistor in series with each LED.
3. Connect the other side of each LED to GND.
4. Open the Arduino sketch in the Arduino IDE.
5. Select the correct board and port.
6. Upload the code.
7. The LEDs will change from red to yellow to green every 3 seconds.

## Future Improvements

I would like to improve this project by:

* Adding a pedestrian crossing button.
* Adding a countdown display.
* Using **millis()** instead of **delay()**.
* Adding different timings for each traffic light.
* Making the system respond to sensors or buttons.
