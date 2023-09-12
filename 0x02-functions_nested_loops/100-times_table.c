#include "main.h"

/**
 * putint - prints an int
 * @n: int to print
 */
void putint(int n)
{
	if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + n);
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + (((n - (n % 10)) / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else
	{
		_putchar(' ');
		_putchar('0' + (((n - (n % 100)) / 100) % 10));
		_putchar('0' + (((n - (n % 10)) / 10) % 10));
		_putchar('0' + (n % 10));
	}
}

/**
 * print_times_table - prints the @n times table, starting with 0
 * @n: int to start from
 */
void print_times_table(int n)
{
	int i;
	int j;

	if ((n > 15) || (n < 0))
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
				_putchar('0');
			else
				putint(i * j);
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
