#include "main.h"
/**
 * print_number - prints an integer
 * @n: int to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 0)
	{
		/* invert number */
		int rev, ones;

		rev = 0;
		while (1)
		{
			ones = n % 10;
			n = (n - ones) / 10;
			rev += ones;
			if (n == 0)
			{
				break;
			}
			rev *= 10;
		}
		/* print it as normal */
		while (1)
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
	else
	{
		_putchar('0' + n);
	}
}
