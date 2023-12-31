#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// Helper function (already implemented)
void print_binary(uint16_t number)
{
    for(int i=sizeof(number)*8-1; i>= 0; i--)
    {
        putchar((number & 1UL << i) ? '1' : '0');
    }    
    putchar('\n');
}

// ArduinoCore-avr/cores/arduino/Arduino.h

#define lowByte(w) ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))
#define bit(b) (1UL << (b))
#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitToggle(value, bit) ((value) ^= (1UL << (bit)))
#define bitWrite(value, bit, bitvalue) ((bitvalue) ? bitSet(value, bit) : bitClear(value, bit))


int main(void)
{

    printf("%d\n", bit(3));         // 8

    print_binary(0xfedc);           // 1111111011011100
    print_binary(lowByte(0xfedc));  // 0000000011011100
    print_binary(highByte(0xfedc)); // 0000000011111110
    printf("\n");

    uint8_t byte;
    byte = 0xff;
    bitClear(byte, 3);
    print_binary(byte);             // 11111111 11110111
    printf("\n");

    byte = 0x00;
    bitSet(byte, 3);
    print_binary(byte);             // 0000000000001000
    printf("\n");

    bool b = bitRead(0xcc, 2);
    printf("%d\n", b);

    byte = 0x00;
    bitWrite(byte, 3, 1);
    print_binary(byte);             // 0000000000001000
    printf("\n");

    return 0;
}
