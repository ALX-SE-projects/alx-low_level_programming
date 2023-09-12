#include "main.h"
#include <stdio.h>
/**
 * putint - prints an int
 * @n: int to print
 */
void putint(int n)
{
	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		putchar('0' + n);
	}
	else if (n < 100)
	{
		putchar('0' + (((n - (n % 10)) / 10) % 10));
		putchar('0' + (n % 10));
	}
	else
	{
		putchar('0' + (((n - (n % 100)) / 100) % 10));
		putchar('0' + (((n - (n % 10)) / 10) % 10));
		putchar('0' + (n % 10));
	}
}
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a \n
 * @n: int to start from
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			putint(n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	{
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			putint(n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		putint(98);
	}
	putchar('\n');
}
