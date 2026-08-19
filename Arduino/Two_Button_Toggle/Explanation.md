# Two Button Toggle - Explanation

This project demonstrates how I used two push buttons to control the state of an LED using an Arduino.

I connected two push buttons to separate digital input pins and the LED to a digital output pin. The Arduino continuously checks the state of both buttons using **digitalRead()**.

When I press the first button, the Arduino detects the button press and turns the LED ON using **digitalWrite()**. When I press the second button, the Arduino turns the LED OFF.

The LED stays in its current state even after I release the buttons because the Arduino only changes the LED state when one of the buttons is pressed.

While making this project, I learned how multiple digital inputs can be used to control a single output. I also learned more about **digitalRead()**, **digitalWrite()**, and how to keep an output in a particular state until another input changes it.

This project helped me understand the basic idea of using multiple inputs to control an output, which is an important concept in embedded systems.
