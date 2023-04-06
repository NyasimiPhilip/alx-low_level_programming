/*
 * Auth: Nyasimi Philip
 * File: 0-binary_to_uint.c
 */
#inculde "main.h"
/*
 * binary_to_uint - convert a binary string to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * This function converts a binary string to an unsigned int.
 * Returns: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num = num * 2 + (b[len] - '0');
	}
	return (num);
}
