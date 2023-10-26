#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int k, pb = 0, i;

	i = (sizeof(unsigned long int) * 8);
	while (i)
	{
		k = n & (1 << (i - 1));
		if (k)
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
