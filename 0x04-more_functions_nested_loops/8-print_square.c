#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		j = size;
		while (j)
		{
			i = size;
			while (i)
			{
				_putchar('#');
				i--;
			}
			_putchar('\n');
			j--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
