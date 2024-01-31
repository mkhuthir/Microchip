
# BlinkM Library


A simple library to control BlinkM module using I2C bus on Microchip Curiosity Board with PIC16F18875 MCU.

the BlinkM is connected to Curiosity HPC Board as following:
 
    BlankM  MikroBus    Curiosity HPC   Remarks
-------------------------------------------------------------------
    I2C C   SCL         RC3             I2C clock
    I2C D   SDA         RC4             I2C data
    PWR-    GND         GND             Ground
    PWR+    +5V         +5V             Power supply
-------------------------------------------------------------------

 * S1 switch is used to step through the demo code (main.c)
 * Serial to USB console cable is used to receive printf output connected to RC6 (MCU TX) & GND.
 * RC3 & RC4 must have pull-up resistors enabled since BlinkM does not have pull-up resistors on its module.
 * Device data sheet https://thingm.com/fileadmin/thingm/downloads/BlinkM_datasheet.pdf
 * Please feel free to copy and use code.

**By Muthanna A. Attyah (June 2017)**

# BlinkM connected to mikroBUS slot 1
<p align="center"> 
<img src="images/1.jpg">
</p>

# UART Cable connected to GND & RC6
<p align="center"> 
<img src="images/2.jpg">
</p>

# BlinkM Module Layout
<p align="center"> 
<img src="images/3.png">
</p>

# BlinkM Coammands List
<p align="center"> 
<img src="images/4.png">
</p>

# UART Console Screenshot
<p align="center"> 
<img src="images/5.png">
</p>