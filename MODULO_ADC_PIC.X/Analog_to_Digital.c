/*
 * File:   Analog_to_Digital.c
 * Author: Pedro
 *
 * Created on 23 de Junho de 2021, 23:26
 */
#include "config.h"
#include <xc.h>
#include "Analog_to_Digital.h"



unsigned int read_value=0;
unsigned int temp_value=0;


void adc_init (void)
{
    INTCONbits.GIE = 0;
    
    ANSELbits.ANS0   = 1;
    ADCON1bits.VCFG0 = ADC_VREF_VDD;  // referencia de tensão +VDD interna
    ADCON1bits.VCFG1 = ADC_VREF_VSS;  // referencia de tensão -VCC interna
    ADCON1bits.ADFM  = 1;
    ADCON0bits.ADCS  = ADC_FOSC_VALUE;
    ADCON0bits.CHS   = ADC_AN0;
    ADRESH = 0;
    ADRESL = 0;
    ADCON0bits.ADON  = 1;
    INTCONbits.PEIE  = 1;
    PIE1bits.ADIE    = 1;
    INTCONbits.GIE   = 1;
    ADCON0bits.GO    = 1;
   
}

void adc_read (void)
{
    read_value = ADRESH;
    read_value = (read_value<<8) + ADRESL ;
    ADCON0bits.GO = 1; 
}

unsigned int adc_value (void)
{
    return(read_value);
}

