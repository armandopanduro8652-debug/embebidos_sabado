#include <avr/sfr_defs.h>

void initialize(void);

void main(void)
{
    /* Initialization */
    initialize();

    /* Main loop */
    while (1U) 
    {
     // Escribir al PORTB (0x05)
        _SFR_IO8(0x00) = 0x02;
    }
}

void initialize(void)
{
    // Escribir al DDRB (0x04)
    _SFR_IO8(0x00) = 0x02; 

}