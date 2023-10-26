#include "main.h"
/**
 * get_sizeof - find the len of @n
 * @n: value to find its len
 *
 * Return: len
*/
int get_sizeof(unsigned long int n)
{
	int s = 0;

	while (n > 0)
	{
		s++;
		n >>= 1;
	}
	s--;
	return (s);
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int k = 1;
	int len = get_sizeof(n);

	if (len > 0)
		k <<= len;
	while (k > 0)
	{
		if (n & k)
			_putchar('1');
		else
			_putchar('0');
		k >>= 1;
	}
}
