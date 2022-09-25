# arduino-traffic-light
A traffic light with an arduino

![demonstration of it working](.github/assets/demo.gif)

## Schematic

Here's how I built this on the hardware side.

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
