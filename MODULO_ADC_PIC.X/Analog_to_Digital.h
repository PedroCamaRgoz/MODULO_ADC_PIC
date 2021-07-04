#ifndef ANALOG_TO_DIGITAL
#define ANALOG_TO_DIGITAL


#define ADC_FOSC_VALUE      0x2
#define ADC_AN0             0x0
#define ADC_VREF_VDD          0
#define ADC_VREF_VSS          0

void adc_init (void);
void adc_read (void);
unsigned int adc_value (void);
//unsigned int Celsius_value (void);


#endif

