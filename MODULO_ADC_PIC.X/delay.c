/*
 * File:   tempo.c
 * Author: 20187263
 *
 * Created on 5 de Fevereiro de 2021, 17:10
 */


#include <xc.h>
#include "config.h"


void delay (int t )
{
    while ( t )
    {
        __delay_ms(1);
        --t;
    }
}
