# GPIO-using-buttons-as-inputs-
Use of inputs(buttons) in AVR microcontrollers

## Introduction
The program uses two buttons to alternately light six LEDS up and down with a delay of 1s. It is written as part of a learning series of use of GPIO in 
Atmega328p microcontroller.

## Technologies
#### Software
* Arduino IDE
* C language

#### Hardware
* Atmega328pu microcontroller
* USB to Serial converter (used PL2303 USB to UART converter)
* 16 MHZ crystal
* 22pf capacitors (2)
* 220ohm resistors (6)
* LEDS (6)
* 10kohm resistor (for reset button)
* buttons (3)

## Setup
When using Arduino IDE with Atmega328pu microcontroller ensure that under Tools menu the following are selected before uploading:

* Board: "Arduino Nano"
* Processor: "ATmega328P(Old Bootloader)"
* Port: (choose appropriate port in which USB to Serial Converter is connected)

## Illustrations
<a href="https://drive.google.com/file/d/1-85HOZ-R4n-DYFY0P6vpxo_g4ldTgNDf/view?usp=sharing" title="Video">Video Illustration</a>
