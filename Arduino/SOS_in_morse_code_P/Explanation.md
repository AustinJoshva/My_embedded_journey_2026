# Project Explanation

## Objective

The goal of this project is to blink an LED in the **SOS Morse code pattern (`... --- ...`)** using an Arduino. This project introduces the basics of controlling digital output pins and using timing to create patterns.

---

## Understanding SOS in Morse Code

SOS is the international distress signal in Morse code.

| Letter | Morse Code |
| ------ | ---------- |
| S      | `...`      |
| O      | `---`      |
| S      | `...`      |

* A **dot (`.`)** is represented by a short LED blink.
* A **dash (`-`)** is represented by a longer LED blink.
* Small delays are added between dots and dashes to make the pattern readable.

---

## How the Program Works

1. The Arduino configures the LED pin as an output using `pinMode()`.
2. The program enters the `loop()` function, which runs continuously.
3. It blinks the LED three short times for **S**.
4. It then blinks the LED three long times for **O**.
5. Finally, it blinks the LED three short times again for **S**.
6. After completing the sequence, the Arduino waits briefly and repeats the pattern forever.

---

## Arduino Functions Used

### `pinMode()`

Configures the LED pin as an output.

```cpp
pinMode(ledPin, OUTPUT);
```

### `digitalWrite()`

Turns the LED ON or OFF.

```cpp
digitalWrite(ledPin, HIGH); // LED ON
digitalWrite(ledPin, LOW);  // LED OFF
```

### `delay()`

Pauses the program for a specified amount of time (in milliseconds). Different delays are used to create dots, dashes, and spaces.

```cpp
delay(200);
```

---

## Timing Logic

| Morse Symbol | LED State                |
| ------------ | ------------------------ |
| Dot (`.`)    | LED ON for a short time  |
| Dash (`-`)   | LED ON for a longer time |
| Space        | LED OFF for a short time |

The difference between dots and dashes is created only by changing how long the LED stays ON.

---

## What I Learned

Through this project, I learned:

* How Arduino controls an LED using digital output.
* How to use `pinMode()`, `digitalWrite()`, and `delay()`.
* The importance of timing in embedded systems.
* How to convert a real-world pattern into program logic.
* How to organize a simple Arduino project.

---

## Future Improvements

Some improvements I plan to make are:

* Accept text input from the Serial Monitor and convert it to Morse code.
* Add a buzzer to play Morse code as sound.
* Support all letters (A–Z) and numbers (0–9).
* Reduce repeated code by using functions and arrays.
* Port the project to an ESP32 or STM32 board.

---

This project is my first step into embedded systems, and I look forward to building more projects as I continue learning.
