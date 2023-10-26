#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int pb = 0, i;

	i = sizeof(unsigned long int) * 8;
	while (i)
	{
		if (n & (1 << (i - 1)))
		{
			if (!pb)
				pb = 1;
			_putchar('1');
		}
		else
		{
			if (pb)
				_putchar('0');
		}
		i--;
	}
	if (!pb)
		_putchar('0');
}
