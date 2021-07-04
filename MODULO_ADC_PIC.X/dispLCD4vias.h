#ifndef DISPLCD4VIAS_H
#define DISPLCD4VIAS_H




void dispLCD_lincol( unsigned char lin, unsigned char col);

void LCD_init( void );

void LCD_Texto( unsigned char lin, unsigned char col, const char * str );

void LCD_str( const char * str );

void LCD_num(  unsigned char lin, unsigned char col, int num, unsigned char tam );

void dispLCD_clr( void );

unsigned char lcd_b0 (void);

unsigned char lcd_b1 (void);

#endif
