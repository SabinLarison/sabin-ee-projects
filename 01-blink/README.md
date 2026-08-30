# Project 1: Blink

First Arduino project. Used a breadboard, an LED, a 330 Ω resistor, 2 jumper wires, and my Arduino.

LED connected to pin 12 through the resistor, blinks on/off every second.

See [blink.ino](./blink.ino) for the code.

## What I learned
- `setup()` runs once, `loop()` runs continuously
- `pinMode()` sets a pin as INPUT or OUTPUT before you can use it
- `delay()` blocks the whole program — nothing else can happen while it's waiting

## Next step
Rewrite this using `millis()` instead of `delay()` so I could blink multiple LEDs independently without one blocking the other.
