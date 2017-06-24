// BlinkM Library
// Muthanna A. Attyah (June 2017)
// Please feel free to copy and use code.
// Device data sheet https://thingm.com/fileadmin/thingm/downloads/BlinkM_datasheet.pdf

/** How the BlinkM is connected to Curiosity HPC Board:
 
    BlankM  MikroBus    Curiosity HPC   Remarks
-------------------------------------------------------------------
    I2C C   SCL         RC3             I2C clock
    I2C D   SDA         RC4             I2C data
    PWR-    GND         GND             Ground
    PWR+    +5V         +5V             Power supply
-------------------------------------------------------------------
 
 * RC3 & RC4 must have pull-up resistors enabled since BlinkM does not have pull-up resistors on its module.
 
**/

#include "mcc_generated_files/mcc.h"
#include "BlinkM.h"

void WaitKeyPress()
{
    while(S1_GetValue());         // Wait until S1 key is pressed
    __delay_ms(100);
    while(!S1_GetValue());        // Wait until S1 key is released
    __delay_ms(100);
}

// Main code
void main(void)
{
    // Setup and initializations
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    
   
    // Testing all functions..
    // Demo Execution loop
    while(1){
        
        printf("\x0C");                             // Terminal Form Feed to erase screen
        printf("\n\nWelcome to BlinkM Demo..\n");

        // Print current BlinkM I2C Address and Firmware Version.
        char Adr[1]={0x9F};
        char Ver[2]={0xA1,0x1E};
        //GetBlinkMAdr(Adr[0]);
        //GetBlinkMVer(Ver[0]);
        
        printf("BlinkM info:\n\nI2C Address\t:%X\nFirmware Ver.\t:%X%X\n\n",Adr[0],Ver[0],Ver[1]);

        printf("Setting the startup to play the green_flash script..\n");
        SetStartup(1,4,5,255,-15);          // Set the Startup to play 4th script
        
        printf("Turn LED off and stop script...\n\n");
        GoToRGB(0x00, 0x00, 0x00);
        StopScript();
        
        printf("Ready to start the Demo...press S1 to start.\n");
        LED_D2_SetHigh();               // All Dx LEDs On.
        LED_D3_SetHigh();
        LED_D4_SetHigh();
        LED_D5_SetHigh();
        WaitKeyPress();
        
        // White
        printf("White...press S1.\n");
        GoToRGB(0xFF, 0xFF, 0xFF);      // Turn LED On
        WaitKeyPress();
        
        // Red
        printf("Red...press S1.\n");
        GoToRGB(0xFF, 0x00, 0x00);  
        WaitKeyPress();
        
        // Green
        printf("Green...press S1.\n");
        GoToRGB(0x00, 0xFF, 0x00);  
        WaitKeyPress();
        
        // Blue
        printf("Blue...press S1.\n");
        GoToRGB(0x00, 0x00, 0xFF);
        WaitKeyPress();
        
        // Yellow
        printf("Yellow...press S1.\n");
        GoToRGB(0xFF, 0xFF, 0x00);
        WaitKeyPress();
        
        // Cyan
        printf("Cyan...press S1.\n");
        GoToRGB(0x00, 0xFF, 0xFF);
        WaitKeyPress();
        
        // Magenta
        printf("Magenta...press S1.\n");
        GoToRGB(0xFF, 0x00, 0xFF);
        WaitKeyPress();
        
        // Slow Fade
        printf("Setting Slow Fade\n");
        SetFadeSpeed(4);
        
        // Fade to Red 
        printf("Fade to Red...press S1.\n");
        FadeToRGB(0xFF, 0x00, 0x00);
        WaitKeyPress();
        
        // Fade to Random RGB
        printf("Fade to random RGB...press S1.\n");
        FadeToRndRGB(0xFF, 0xFF, 0xFF);
        WaitKeyPress();
        
        // Fade to 0x60 HSB
        printf("Fade to 0x60 HSB...press S1.\n");
        FadeToHSB(0x60, 0xFF, 0xFF);
        WaitKeyPress();
        
        // Fade to Random HSB
        printf("Fade to random HSB\n");
        FadeToRndHSB(0xFF, 0xFF, 0xFF);
        WaitKeyPress();
        
        // No fade and faster time
        printf("Setting no fade and faster time\n");
        SetFadeSpeed(255);
        SetTimeAdjust(-2);
        
        // Play script 'RGB' 2 times start from first line default time speed
        printf("Play RGB script...press S1.\n");
        PlayLightScript(RGB, 2, 0);
        WaitKeyPress();
        
        // Default Fade and Fast time
        printf("Setting fast time\n");
        SetTimeAdjust(-2);

        // Play script 'blue_flash' 5 times start from first line fast time speed
        printf("Play blue_flash script...press S1.\n");
        PlayLightScript(blue_flash, 5, 0);
        WaitKeyPress();
        
        // Put back the default speed.
        printf("Setting default fade and time speed\n");
        SetFadeSpeed(0);
        SetTimeAdjust(0);
        
        // Play script 'virtual_candle' 2 times start from first line default fade speed
        printf("Play virtual_candle...press S1.\n");
        PlayLightScript(virtual_candle, 2, 0);
        WaitKeyPress();
        
        // Play script 'morse_code_SOS' 2 times start from first line
        printf("Play morse_code script ...press S1.\n");
        PlayLightScript(morse_code_SOS, 2, 0);
        WaitKeyPress();
        
        // Build a new script
        printf("Building a new script\n");
        SetScriptLength(0,7,3);                         // Script 0 is 7 lines, repeat it 3 times
        WriteScriptLine(0,0,15,'n',0xFF,0x00,0x00);     // Line 1
        WriteScriptLine(0,1,15,'n',0x00,0xFF,0x00);     // Line 2
        WriteScriptLine(0,2,15,'n',0x00,0x00,0xFF);     // Line 3
        WriteScriptLine(0,3,15,'n',0xFF,0xFF,0x00);     // Line 4
        WriteScriptLine(0,4,15,'n',0xFF,0x00,0xFF);     // Line 5
        WriteScriptLine(0,5,15,'n',0x00,0xFF,0xFF);     // Line 6
        WriteScriptLine(0,6,15,'n',0xFF,0xFF,0xFF);     // Line 7
        
        // Play the new script one time
        printf("Play the new script...press S1.\n");
        PlayLightScript(0, 1, 0);
        WaitKeyPress();
        
        //Demo is done...Blink all LEDs and wait for a key press to start another demo cycle.
        printf("Play hue_cycle Script...\n");
        printf("\n\nDemo is Done...Thanks for watching\npress S1 to start another one!\n");
        PlayLightScript(hue_cycle,0,0);
        LED_D2_SetLow();                                // All Dx LEDs Off.
        LED_D3_SetLow();
        LED_D4_SetLow();
        LED_D5_SetLow();
        WaitKeyPress();
    }
        
}
