#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	j = 0;
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
