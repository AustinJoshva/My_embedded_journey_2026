# Potentiometer Controlled LED - Explanation

This project demonstrates how I used a potentiometer to control the brightness of an LED using an Arduino.

I connected the potentiometer to 5V, GND, and an analog input pin. The middle pin of the potentiometer gives a variable voltage depending on how much I rotate it.

The Arduino reads this voltage using **analogRead()**. The value received from the potentiometer is between **0** and **1023**. I then convert this value to a range of **0** to **255** because **analogWrite()** uses PWM values from **0** to **255**.

The converted value is sent to the LED using **analogWrite()**. When I rotate the potentiometer, the PWM value changes, which changes the brightness of the LED.

While making this project, I learned how analog input works, how a potentiometer can be used to produce a variable voltage, and how PWM can be used to control the brightness of an LED.

