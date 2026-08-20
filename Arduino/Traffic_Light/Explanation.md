# Traffic Light - Explanation

This project demonstrates a simple traffic light system using an Arduino and three LEDs.

I used a red, yellow, and green LED, with each LED connected to a separate digital output pin through a 1KΩ resistor. The Arduino controls the LEDs by turning them ON and OFF using **digitalWrite()**.

The red LED turns ON first and stays ON for 3 seconds. It then turns OFF and the yellow LED turns ON for the next 3 seconds. After that, the yellow LED turns OFF and the green LED turns ON for 3 seconds.

Once the green LED finishes, the sequence starts again from the red LED.

The sequence is:

**Red → Yellow → Green → Red**

While making this project, I learned how to control multiple outputs, use **digitalWrite()** to control LEDs, and use **delay()** to create a timed sequence.

This project helped me understand how simple programmed sequences can be used to represent real-world systems such as traffic lights.
