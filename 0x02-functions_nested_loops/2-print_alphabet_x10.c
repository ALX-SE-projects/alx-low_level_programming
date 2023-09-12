#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			putchar((char) i);
		}
		j++;
		putchar('\n');
	}
}
