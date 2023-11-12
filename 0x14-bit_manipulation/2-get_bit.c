#include "main.h"
/**
 * get_bit - The function gets the value of a bit
 * @n: number containing the bit.
 * @index: position of the bit
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
