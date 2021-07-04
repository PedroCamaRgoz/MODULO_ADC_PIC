/*
 * File:   main.c
 * Author: Pedro
 *
 * Created on 3 de Julho de 2021, 22:52
 */

#include "config.h"
#include <xc.h>
#include "library_shelf.h"
#include "Analog_to_Digital.h"


void main (void)
{
    print.init();
    adc_init();
   
    print.str_position(0,0,"ADC:            ");
        
    while(1)
    {
        print.number(0,5,adc_value(),4);        
    }
    
}

