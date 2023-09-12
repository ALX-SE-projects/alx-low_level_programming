#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: the value of the last digit
 * @n: int to be checked
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
