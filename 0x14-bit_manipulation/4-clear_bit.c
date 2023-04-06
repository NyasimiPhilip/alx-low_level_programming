/*
 *  File: 4-clear_bit.c
 */
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
