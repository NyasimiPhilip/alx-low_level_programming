/**
 * set_bit - Sets the bit at the given index
 * @n: is a pointer to an unsigned 64-bit integer
 * @index: is an unsigned integer
 * Return: int
 **/
#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
