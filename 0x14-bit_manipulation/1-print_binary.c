#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int k, pb = 0;
	int i;

	for (i = 32 - 1; i >= 0; i--)
	{
		k = n & (1 << (unsigned) i);
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
	}
	if (!pb)
		_putchar('0');
}
