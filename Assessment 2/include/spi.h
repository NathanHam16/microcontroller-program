#include <avr/io.h>
#include <stdint.h>
#include <avr/interrupt.h>

void spi_init(void);
void spi_write(uint8_t data);