// Muthanna Alwahash
// Feb 2024


#include "mcc_generated_files/system/system.h"

// disable warnings about unused functions
#pragma warning disable 520
#pragma warning disable 2053

void WaitKeyPress()
{
    while(S1_GetValue());         // Wait until S1 key is pressed
    __delay_ms(50);
    while(!S1_GetValue());        // Wait until S1 key is released
    __delay_ms(50);
}

// Main code
void main(void)
{
    // Setup and initializations
    SYSTEM_Initialize();
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
   
    while(1){
        
        printf("\n\rI2C Scanner\n\r");
        printf("Ready to start the Demo...press S1 to start.\n\r");
        WaitKeyPress();
        
        D2_SetHigh();   // All Dx LEDs On.
        D3_SetHigh();
        D4_SetHigh();
        D5_SetHigh();

        uint8_t i2c_addr;
        uint8_t i2c_data[2];  

        for (i2c_addr=1; i2c_addr<128; i2c_addr++)
        {
            printf("Checking %d\n\r", i2c_addr);
            I2C1_Read(i2c_addr, i2c_data, 1);
            while(I2C1_IsBusy());
            __delay_ms(100);
            if (I2C_ERROR_NONE == I2C1_ErrorGet())
            {
                printf("device found at address %d\n\r",i2c_addr);
            }

        }
        
        printf("Press S1 to end\n\r");
        WaitKeyPress();
        
        D2_SetLow();    // All Dx LEDs Off.
        D3_SetLow();
        D4_SetLow();
        D5_SetLow();
    }
        
}
