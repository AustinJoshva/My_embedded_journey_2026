# Two Button Toggle

This is an Arduino project I made to learn how two push buttons can be used to control an LED. In this project, one button is used to turn the LED ON and the other button is used to turn it OFF.

Unlike my previous button-controlled LED project, the LED does not depend on whether the button is being held down. Pressing the ON button changes the LED state to ON, and pressing the OFF button changes it back to OFF.

## Components Used

* Arduino Uno
* 2 Push Buttons
* LED
* 3 x 1KΩ Resistors
* Breadboard
* Jumper Wires

## How It Works

The two push buttons are connected to digital input pins on the Arduino. The LED is connected to a digital output pin.

The Arduino continuously checks both buttons using **digitalRead()**.

When I press the first button, the Arduino detects the input and turns the LED ON using **digitalWrite()**.

When I press the second button, the Arduino detects the input and turns the LED OFF.

The LED keeps its current state after the button is released because the Arduino changes the output state only when a button is pressed.

## What I Learned

While making this project, I learned:

* How to use two digital inputs at the same time.
* How to control one output using different inputs.
* How **digitalRead()** works with push buttons.
* How **digitalWrite()** can be used to control an LED.
* How to make an output stay in a particular state after a button is released.

## How to Run

1. Connect the two push buttons to separate digital input pins.
2. Connect the LED to a digital output pin through a resistor.
3. Connect the required resistors to the button inputs.
4. Open the Arduino sketch in the Arduino IDE.
5. Select the correct board and port.
6. Upload the code.
7. Press the first button to turn the LED ON.
8. Press the second button to turn the LED OFF.

