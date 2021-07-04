/*
 * File:   Monitor_interruption.c
 * Author: Pedro
 *
 * Created on 2 de Julho de 2021, 19:19
 */


#include <xc.h>
#include "timers.h"
#include "Analog_to_Digital.h"

void __interrupt() isr(void)
{
    if( INTCONbits.T0IF )
    {
        INTCONbits.T0IF = 0; 
        t0_init_cont();   
      
    }
    
    if( PIR1bits.ADIF )
    {
        PIR1bits.ADIF = 0;
        adc_read();
    }
}