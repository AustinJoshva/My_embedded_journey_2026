# Potentiometer Controlled LED

This is an Arduino project I made to control the brightness of an LED using a potentiometer.

The potentiometer gives the Arduino an analog input based on how much I rotate it. The Arduino reads this value and uses it to control the brightness of the LED.

## Components Used

* Arduino Uno
* Potentiometer
* LED
* 1KΩ Resistor
* Breadboard
* Jumper Wires

## How It Works

The middle pin of the potentiometer is connected to an analog input pin of the Arduino. The other two pins are connected to 5V and GND.

When I rotate the potentiometer, the voltage at the middle pin changes. The Arduino reads this voltage using **analogRead()** and gets a value between **0** and **1023**.

Since **analogWrite()** uses PWM values from **0** to **255**, I convert the potentiometer value from the **0-1023** range to the **0-255** range.

The converted value is then used to control the brightness of the LED. Rotating the potentiometer changes the brightness of the LED.

## What I Learned

While making this project, I learned:

* How a potentiometer works as an analog input.
* How to use **analogRead()**.
* Why the analog input gives values from **0** to **1023**.
* How PWM is used to control LED brightness.
* Why the value needs to be converted from **0-1023** to **0-255**.
* How an analog input can be used to control an output.

## How to Run

1. Connect the potentiometer to 5V, GND, and an analog input pin.
2. Connect the LED to a PWM-capable digital pin through a 1KΩ resistor.
3. Connect the other side of the LED to GND.
4. Open the Arduino sketch in the Arduino IDE.
5. Select the correct board and port.
6. Upload the code.
7. Rotate the potentiometer and observe the change in LED brightness.

## Future Improvements

I would like to improve this project by:

* Controlling multiple LEDs with potentiometers.
* Using the potentiometer to control motor speed.
* Adding a display to show the potentiometer value.
* Experimenting with different PWM-controlled devices.
