/*
 * File: 2-get_bit.c
 * Auth: Nyasimi Philip
 */

#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
	{
		return (-1);
	}
	unsigned long int mask = 1UL << index;

	return( (n & mask) != 0);
}
