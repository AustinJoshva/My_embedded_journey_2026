# Button Controlled LED - Explanation

This project demonstrates how I can use a push button as an input to control an LED using an Arduino.

I connected the push button to a digital input pin and the LED to a digital output pin. The Arduino continuously checks the state of the button using **digitalRead()**.

When I press the button, the Arduino detects a **HIGH** signal and turns the LED ON using **digitalWrite()**. When I release the button, the signal becomes **LOW**, so the Arduino turns the LED OFF.

The resistor connected to the button helps keep the input signal at a defined state when the button is not pressed. The resistor connected to the LED limits the current flowing through it and protects the LED.

While making this project, I learned how digital inputs and outputs work, how **digitalRead()** and **digitalWrite()** are used, and why resistors are important when connecting buttons and LEDs to an Arduino.

This was a useful project for understanding the basic relationship between an input and an output in an embedded system.
