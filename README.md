# joystick-servo-controller

A beginner-friendly project that integrates analog joystick input, servo motor control, status LED diodes, piezo feedback, and 7-segment numerical display, all running on an Arduino Uno R3. Designed as a hardware/software integration demo. 

## Features
- control servo motor direction and speed using joystick input
- switch between x-axis and y-axis input control via button
- numeric status display of speed using HTK16K33 LED display
- Visual Indicators (red/white LEDs) based on motor state
- Piezo buzzer alert for threshold purposes
- Real-world use case: simulates a speedometer, motorized control panel, or actuator interface

## Components Used
- Arduino R3
- joystick (analog)
- Continous rotation servo (FS90R)
- Adafruit HT16K33 7-segment LED backpack
- Red LED
- White LED
- Piezo Buzzer
- Pushbutton

## Wiring and Pin Overview
Joystick = A0
Servo = D6
Red LED = D8
White LED = D7
Button = D?
Piezo = D5
