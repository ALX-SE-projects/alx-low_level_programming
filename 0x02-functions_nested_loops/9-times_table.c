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
		_putchar('0' + n);
	}
	else
	{
		_putchar('0' + (((n - (n % 10)) / 10) % 10));
		_putchar('0' + (n % 10));
	}
}

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i == 0; i <= 9; i++)
	{
		for (j == 0; j <= 9; j++)
		{
			putint(i * j);
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
