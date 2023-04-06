/*
 * File: 3-set_bit.c
 * Auth: Nyasimi Philip
 */

#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	unsigned long int mask = 1UL << index;
	unsigned long int inverted_mask = ~mask;

	*n = (*n & inverted_mask) | mask;
	return (1);
}
