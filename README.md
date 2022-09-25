# Arduino Traffic Light

A traffic light with an arduino uno and some LEDs.

![demonstration of it working](.github/assets/demo.GIF)

## Schematic

Here's how I built this on the hardware side.

You need the follwing:

* Arduino
* 2x Red LED
* 2x Yellow LED
* 2x Green LED
* 6x 200 Ohm Resistor
* 3x short cable
* 4x longer cable

![schematic of arduino](.github/assets/schematic.jpg)

## Traffic Light Workings

```text
+-------+     +-------+           
|       |     |       |           
|  R/Y  |     |       |          
|       |     |       |           
|       |     |       |           
+-------+     |       |           
|       |     |       |           
|       |     |       |           
|       |     |       |           
|       |     |       |           
|   G   |     |   R   |           
|       |     |       |           
|       |     |       |           
|       |     |       |           
|       |     |       |           
+-------+     |       |           
|       |     |       |           
|   Y   |     |       |           
|       |     |       |           
|       |     |       |           
+-------+     +-------+           
|       |     |       |           
|       |     |  R/Y  |           
|       |     |       |           
|       |     |       |           
|       |     +-------+           
|       |     |       |           
|       |     |       |           
|       |     |       |           
|       |     |       |           
|   R   |     |   G   |           
|       |     |       |           
|       |     |       |           
|       |     |       |           
|       |     |       |           
|       |     +-------+           
|       |     |       |           
|       |     |   Y   |           
|       |     |       |           
|       |     |       |           
+-------+     +-------+     
```
