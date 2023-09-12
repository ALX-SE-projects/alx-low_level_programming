#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet(void)
{
	int i, j;

	while (j < 2)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar((char) i);
		}
		j++;
	}
	_putchar('\n');
}
