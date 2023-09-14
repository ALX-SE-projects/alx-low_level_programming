#include "main.h"
/**
 * absu - get absolute value of an integer
 * Return: absolute balue of @value
 * @value: int to process
 */
unsigned int absu(int value)
{
	return ((value < 0) ? -((unsigned int)value) : (unsigned int)value);
}
/**
 * _pow - calculates power
 * Return: @x ** @n
 * @x: base
 * @n: exponent
 */
int _pow(int x, int n)
{
	int i, num;

	num = 1;
	for (i = 0; i < n; ++i)
		num *= x;
	return (num);
}
/**
 * print_number - prints an integer
 * @n: int to print
 */
void print_number(int n)
{
	int ones, digits, power, left, _;

	if (n < 0)
		_putchar('-');
	if (n != 0)
	{
		/* count digits */
		digits = 0;
		_ = n;
		while (1)
		{
			digits++;
			ones = n % 10;
			n = (n - ones) / 10;
			if (n == 0)
			{
				break;
			}
		}
		n = _;
		/* print int */
		for (; digits > 0; digits--)
		{
			if (absu(n) < 10)
			{
				_putchar('0' + absu(n));
				break;
			}
			else
			{
				power = _pow(10, (digits - 1));
				left = (n - (n % power)) / power;
				n -= left * power;
				_putchar('0' + absu(left));
			}
		}
	}
	else
		_putchar('0');
}
