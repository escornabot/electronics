# Escorna CPU + Keypad /  (version 2.10)

## Changes 2.10

  - Keyboard pin is A7 instead A4 so I2C interface is free to use in your projects.
  - Polarity inversion protection by diode anti-parallel and resetable fuse.
  - Power switch was moved to better position on the board 'backside'.
  - Switch compatibility with SK-12D07 and SK-12F14.
  - Keypad can use tactile switches 6mm, 12mm and 12mm with LED. See more below.
  - One of the EscornaShield connector was removed (obsolete).
  - Continuing the connector D13 - RAW (expand connections)
  - Buzzer, power connectors and drivers can be connected on both sides of the board.
  - Holes for holders continue in the same position (PCB extended 5.1mm backwards).
  - Full compatible one side, with an operative Escornabot (excepting the expansion connector).

## Tactile switches with LED

LED assignments:    --        [suggested color][wiki]


| KEY / signal| Color |
|-------------|-------|
| UP  / A0    | Blue  |
| RIGHT / A3  | Gren  |
| DOWN / A2   | Yelow |
| LEFT / A1   | Reed  |
| GO / D13    | WiteA |



The LEDs can be disabled by cutting a small wire-jumper, you can use these outputs for other things. Reconnect with a small welding.


## Expansion connector

2.54mm double strip

|   row 1         |     row 2      |
|-----------------|----------------|
| 3V3             | 3V3            |
| 5V              | 5V             |
| D13 / SCK       | A0 / D14       |
| A1  / D15       | A2 / D16       |
| A3  / D17       | A4 / D18 / SDA |
| A5  / D19 / SCL | A6 / No Pullup |
| GND             | GND            |
|-----------------|----------------|

## Author and license

* Author: [XDeSIG][TWI01]
* License: [Creative Commons BY-SA][CCBYSA]

![Render Escorna CPU 2.10][RENDER]


<!-- links -->
[wiki]: https://en.wikipedia.org/wiki/Navigation_light
[CCBYSA]: http://creativecommons.org/licenses/by-sa/4.0/
[TWI01]: https://twitter.com/xdesig
[RENDER]: Escorna_CPU_2_10_34T.jpg