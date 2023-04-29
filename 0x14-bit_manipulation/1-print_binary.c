#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * power - Calculates the power of a number
 * @base: is the base number
 * @pow: is the exponent
 * Return: int
 */
unsigned long int power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}

void print_binary(unsigned long int num)
{
	unsigned long int divisor, result;
	char flag;

	flag = 0;
	divisor = power(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		result = num & divisor;
		if (result == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
