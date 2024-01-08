/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.15.3
        Device            :  PIC16F18875
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set CS aliases
#define CS_TRIS               TRISAbits.TRISA3
#define CS_LAT                LATAbits.LATA3
#define CS_PORT               PORTAbits.RA3
#define CS_WPU                WPUAbits.WPUA3
#define CS_OD                ODCONAbits.ODCA3
#define CS_ANS                ANSELAbits.ANSA3
#define CS_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define CS_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define CS_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define CS_GetValue()           PORTAbits.RA3
#define CS_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define CS_SetPullup()      do { WPUAbits.WPUA3 = 1; } while(0)
#define CS_ResetPullup()    do { WPUAbits.WPUA3 = 0; } while(0)
#define CS_SetPushPull()    do { ODCONAbits.ODCA3 = 1; } while(0)
#define CS_SetOpenDrain()   do { ODCONAbits.ODCA3 = 0; } while(0)
#define CS_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define CS_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set LED_D2 aliases
#define LED_D2_TRIS               TRISAbits.TRISA4
#define LED_D2_LAT                LATAbits.LATA4
#define LED_D2_PORT               PORTAbits.RA4
#define LED_D2_WPU                WPUAbits.WPUA4
#define LED_D2_OD                ODCONAbits.ODCA4
#define LED_D2_ANS                ANSELAbits.ANSA4
#define LED_D2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_D2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_D2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_D2_GetValue()           PORTAbits.RA4
#define LED_D2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_D2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_D2_SetPullup()      do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_D2_ResetPullup()    do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_D2_SetPushPull()    do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED_D2_SetOpenDrain()   do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED_D2_SetAnalogMode()  do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED_D2_SetDigitalMode() do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED_D3 aliases
#define LED_D3_TRIS               TRISAbits.TRISA5
#define LED_D3_LAT                LATAbits.LATA5
#define LED_D3_PORT               PORTAbits.RA5
#define LED_D3_WPU                WPUAbits.WPUA5
#define LED_D3_OD                ODCONAbits.ODCA5
#define LED_D3_ANS                ANSELAbits.ANSA5
#define LED_D3_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_D3_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_D3_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_D3_GetValue()           PORTAbits.RA5
#define LED_D3_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_D3_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_D3_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_D3_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_D3_SetPushPull()    do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_D3_SetOpenDrain()   do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_D3_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define LED_D3_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set LED_D4 aliases
#define LED_D4_TRIS               TRISAbits.TRISA6
#define LED_D4_LAT                LATAbits.LATA6
#define LED_D4_PORT               PORTAbits.RA6
#define LED_D4_WPU                WPUAbits.WPUA6
#define LED_D4_OD                ODCONAbits.ODCA6
#define LED_D4_ANS                ANSELAbits.ANSA6
#define LED_D4_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LED_D4_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LED_D4_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LED_D4_GetValue()           PORTAbits.RA6
#define LED_D4_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LED_D4_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define LED_D4_SetPullup()      do { WPUAbits.WPUA6 = 1; } while(0)
#define LED_D4_ResetPullup()    do { WPUAbits.WPUA6 = 0; } while(0)
#define LED_D4_SetPushPull()    do { ODCONAbits.ODCA6 = 1; } while(0)
#define LED_D4_SetOpenDrain()   do { ODCONAbits.ODCA6 = 0; } while(0)
#define LED_D4_SetAnalogMode()  do { ANSELAbits.ANSA6 = 1; } while(0)
#define LED_D4_SetDigitalMode() do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set LED_D5 aliases
#define LED_D5_TRIS               TRISAbits.TRISA7
#define LED_D5_LAT                LATAbits.LATA7
#define LED_D5_PORT               PORTAbits.RA7
#define LED_D5_WPU                WPUAbits.WPUA7
#define LED_D5_OD                ODCONAbits.ODCA7
#define LED_D5_ANS                ANSELAbits.ANSA7
#define LED_D5_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LED_D5_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LED_D5_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LED_D5_GetValue()           PORTAbits.RA7
#define LED_D5_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LED_D5_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LED_D5_SetPullup()      do { WPUAbits.WPUA7 = 1; } while(0)
#define LED_D5_ResetPullup()    do { WPUAbits.WPUA7 = 0; } while(0)
#define LED_D5_SetPushPull()    do { ODCONAbits.ODCA7 = 1; } while(0)
#define LED_D5_SetOpenDrain()   do { ODCONAbits.ODCA7 = 0; } while(0)
#define LED_D5_SetAnalogMode()  do { ANSELAbits.ANSA7 = 1; } while(0)
#define LED_D5_SetDigitalMode() do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set S1 aliases
#define S1_TRIS               TRISBbits.TRISB4
#define S1_LAT                LATBbits.LATB4
#define S1_PORT               PORTBbits.RB4
#define S1_WPU                WPUBbits.WPUB4
#define S1_OD                ODCONBbits.ODCB4
#define S1_ANS                ANSELBbits.ANSB4
#define S1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define S1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define S1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define S1_GetValue()           PORTBbits.RB4
#define S1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define S1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define S1_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define S1_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define S1_SetPushPull()    do { ODCONBbits.ODCB4 = 1; } while(0)
#define S1_SetOpenDrain()   do { ODCONBbits.ODCB4 = 0; } while(0)
#define S1_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define S1_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()    do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()   do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()   do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()         PORTCbits.RC3
#define RC3_SetDigitalInput()   do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()  do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()     do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()   do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode() do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()    do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()   do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()   do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()         PORTCbits.RC4
#define RC4_SetDigitalInput()   do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()  do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()     do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()   do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode() do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set S2 aliases
#define S2_TRIS               TRISCbits.TRISC5
#define S2_LAT                LATCbits.LATC5
#define S2_PORT               PORTCbits.RC5
#define S2_WPU                WPUCbits.WPUC5
#define S2_OD                ODCONCbits.ODCC5
#define S2_ANS                ANSELCbits.ANSC5
#define S2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define S2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define S2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define S2_GetValue()           PORTCbits.RC5
#define S2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define S2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define S2_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define S2_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define S2_SetPushPull()    do { ODCONCbits.ODCC5 = 1; } while(0)
#define S2_SetOpenDrain()   do { ODCONCbits.ODCC5 = 0; } while(0)
#define S2_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define S2_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()     do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()   do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode() do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()    do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()   do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()   do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()         PORTCbits.RC7
#define RC7_SetDigitalInput()   do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()  do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()     do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()   do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode() do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/