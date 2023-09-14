#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k, x;

		j = 0;
		for (i = 0; i < size; i++)
		{
			j++;
			k = size - j;
			for (x = 0; x < k; x++)
			{
				_putchar(' ');
			}
			for (x = 0; x < j; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
