#include <stdio.h>
#include <math.h>
#include <assert.h>

int main(void)
{
    // Given the ADC value of a Microcontroller [0..1023]
    int adc = 511;
    printf("ADV value = %d\n", adc);

    // adc -> voltage [0..5]V 
    double voltage = // TODO
    printf("voltage = %3.2f [V]\n", voltage);

    // temperature -> [-20.0, 80.0]°C
    double temp = // TODO
    printf("temperature = %5.1f [°C]\n", temp);

    return 0;
}
