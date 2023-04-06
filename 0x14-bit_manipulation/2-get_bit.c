/**
 * File: 2-get_bit.c
 * Auth: Nyasimi Philip
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
