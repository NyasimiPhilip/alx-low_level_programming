/**
 *  get_bit - returns the value of the bit
 *  @n: is an unsigned long integer.
 *  @index: is an unsigned integer
 *  Return: int
 */
#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	mask <<= index;
	if (n & mask)
		return (1);
	return (0);
}
