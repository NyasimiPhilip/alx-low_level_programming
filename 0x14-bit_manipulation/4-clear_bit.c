/**
 * clear_bit - Clears the bit at given index in unsigned integer
 * @n:a pointer to an unsigned 64-bit integer
 * @index: is an unsigned integer
 * Return: 1 or -1
 **/
#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask <<= index;
	*n &= ~mask;
	return (1);
}
