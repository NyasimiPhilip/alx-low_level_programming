#include "main.h"
/*
 * binary_to_uint - convert a binary string to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * This function converts a binary string to an unsigned int.
 * Returns: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int num = 0, mult = 1;

	if (!b)
	{
		return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
	{
		;
	}
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		num += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
