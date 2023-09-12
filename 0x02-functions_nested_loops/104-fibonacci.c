#include "main.h"
/**
 * putint - prints an int
 * @n: int to print
 */
void putint(unsigned long int n)
{
	if (n / 10)
	{
		putint(n / 10);
	}
	_putchar(n % 10 + '0');
}
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int counter;
	unsigned long int i;
	unsigned long int j;
	unsigned long int k;

	i = 1;
	j = 2;
	putint(i);
	putint(j);
	counter = 2;
	while (1)
	{
		k = i + j;
		i = j;
		j = k;
		putint(k);
		counter++;
		if (counter != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
	return (0);
}
