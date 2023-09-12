#include "main.h"
/**
 * putint - prints an int
 * @n: int to print
 */
void putint(int n)
{
	if (n < 10)
	{
		_putchar('0');
		_putchar('0' + n);
	}
	else
	{
		_putchar('0' + (n % 10));
		_putchar('0' + (((n - (n % 10)) / 10) % 10));
	}
}

/**
 * jack_bauer - prints day of jack_bauer
 * Description: prints every minute of the day of Jack Bauer
 *              , starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int h;

	for (h = 0; h < 24; h++)
	{
		int m;

		for (m = 0; m < 60; m++)
		{
			putint(h);
			_putchar(':');
			putint(m);
			_putchar('\n');
		}
	}
}
