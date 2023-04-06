/*
 * File: 2-get_bit.c
 * Auth: Nyasimi Philip
 */

#include "main.h"
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	unsigned long int mask = 1UL << index;

	if ((n & mask) == 0)
	{
		return (0);
	}
	return (1);
}
