#include "main.h"
/**
 * print_number - prints an integer
 * @n: int to print
 */
void print_number(int n)
{
	int rev, ones, digits, i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	/* invert number */
	n = (n * 10) + 1; /* append one to inverted num to retain front zeros*/
	rev = 0;
	digits = 0;
	while (1)
	{
		digits++;
		ones = n % 10;
		n = (n - ones) / 10;
		rev += ones;
		if (n == 0)
		{
			break;
		}
		rev *= 10;
	}
	digits--;
	/* print it as normal */
	for (i = 0; i < digits; i++)
	{
		ones = rev % 10;
		rev = (rev - ones) / 10;
		_putchar('0' + ones);
		if (rev == 0)
		{
			break;
		}
	}
}
