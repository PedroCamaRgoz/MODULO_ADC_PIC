/*
 * File:   timers.c
 * Author: 20187263
 *
 * Created on 9 de Junho de 2021, 14:44
 */

#include <xc.h>

#define LOAD_T0 (256-250)  // total e quando passos eu quero 
#define LOAD_COUNT (256-250) 

#define SCALE    1

unsigned int  timer0_value = 0;
unsigned int counter_value = 0;


void timer0_init ( void )
{
    INTCONbits.GIE      = 0;
    OPTION_REGbits.T0CS = 0;
    OPTION_REGbits.PSA  = 1;
    TMR0 = LOAD_T0;
    INTCONbits.TMR0IE   = 0;
    INTCONbits.GIE      = 1;  
}

void t0_init_cont (void)
{
    TMR0 = LOAD_T0;
    if(timer0_value) -- timer0_value;  
}

void timer0_get ( unsigned int value)
{
    TMR0 = LOAD_T0;
    timer0_value  = value;
    INTCONbits.TMR0IE = 1;
}

void Play_timer0 (void)
{
    INTCONbits.TMR0IE = 1;
}

void Pause_timer0 (void)
{
    INTCONbits.TMR0IE = 0;
}

unsigned int status_timer0 (void)
{
    return(timer0_value);
}

