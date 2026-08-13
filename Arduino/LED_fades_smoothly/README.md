# LED Fading

This is a simple Arduino project I made while learning how PWM works. I used PWM to gradually increase and decrease the brightness of an LED, creating a fading effect.

The main purpose of this project was to understand how `analogWrite()` works and how PWM can be used to control the brightness of an LED.

## Components Used

* Arduino Uno
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires

## How It Works

The LED is connected to a PWM-capable pin on the Arduino.

The program gradually increases the PWM value from `0` to `255`. As the value increases, the LED becomes brighter. After reaching maximum brightness, the value is gradually decreased back to `0`, making the LED dim again.

This process keeps repeating, creating a continuous fading effect.

## What I Learned

While making this project, I learned:

* How PWM works.
* How to use `analogWrite()`.
* How PWM values affect LED brightness.
* How `for` loops can be used to gradually change a value.
* How to control an LED using software.

## How to Run

1. Connect the LED to a PWM-capable pin through a 220Ω resistor.
2. Connect the other side of the LED to GND.
3. Open the Arduino sketch in the Arduino IDE.
4. Select the correct Arduino board and port.
5. Upload the code.
6. The LED should gradually fade in and out.

## Future Improvements

I would like to improve this project by:

* Adding a potentiometer to control the fading speed.
* Controlling multiple LEDs.
* Creating different fading patterns.
* Using `millis()` instead of `delay()` to make the program non-blocking.
