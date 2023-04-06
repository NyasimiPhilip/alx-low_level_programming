
#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
}
