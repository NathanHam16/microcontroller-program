#include <avr/io.h>
#include <stdint.h>
#include <avr/interrupt.h>

void uart_init(void);
uint8_t uart_has_data();
uint8_t uart_getc(void);
void uart_putc(uint8_t c);
void uart_puts(char* string);