#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary(1 or 0).
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1UL << 63;

	for (i = 0; i < 64; i++)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else if (i != 0)
		{
			_putchar('0');
		}
		n <<= 1;
	}
	if (i == 64)
	{
		_putchar('0');
	}
}
