# Button Controlled LED

This is a simple Arduino project I made to learn how a push button can be used as an input to control an LED.

In this project, when I press the button, the LED turns ON. When I release the button, the LED turns OFF. This helped me understand how digital inputs work with Arduino.

## Components Used

* Arduino Uno
* Push Button
* LED
* 2 x 1KΩ Resistor
* Breadboard
* Jumper Wires

## How It Works

The push button is connected to a digital input pin on the Arduino. The Arduino continuously checks the state of the button using **digitalRead()**.

When the button is pressed, the input becomes **HIGH**, so the Arduino turns the LED ON.

When the button is released, the input becomes **LOW**, so the Arduino turns the LED OFF.

## What I Learned

While making this project, I learned:

* How digital input works on Arduino.
* How to use **digitalRead()**.
* How to use **digitalWrite()** to control an LED.
* How a push button can be used to control an output.
* Why a resistor is needed to keep the input from floating.

## How to Run

1. Connect the push button to the digital input pin.
2. Connect the LED to a digital output pin through a 1KΩ resistor.
3. Connect the required resistor to the button input.
4. Open the Arduino sketch in the Arduino IDE.
5. Select the correct board and port.
6. Upload the code.
7. Press the button and observe the LED.

## Future Improvements

I would like to improve this project by:

* Making the LED stay ON after pressing the button once.
* Adding multiple buttons and LEDs.
* Using the button to control different LED patterns.
* Learning about hardware and software debouncing.
