# LED Fading - Explanation

This project demonstrates how Pulse Width Modulation (PWM) can be used to control the brightness of an LED using an Arduino.

I connected an LED to a PWM-capable pin on the Arduino through a 220Ω resistor. Using the `analogWrite()` function, I gradually changed the PWM value from 0 to 255, which made the LED slowly become brighter. After reaching maximum brightness, I decreased the PWM value back to 0, making the LED gradually dim. This cycle repeats continuously, creating a smooth fading effect.

While building this project, I learned how PWM works, how the `analogWrite()` function controls the duty cycle of a digital signal, and how `for` loops can be used to create smooth transitions by gradually changing values.

Although this is a simple project, it helped me understand an important concept that is widely used in embedded systems for applications such as LED dimming, motor speed control, and other devices that require variable output levels.
