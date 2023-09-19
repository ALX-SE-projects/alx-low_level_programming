#include "main.h"
/**
 * _puts - prints a string, followed by a \n, to stdout
 * @str: pointer to string to print
 */
void _puts(char *str)
{
	int idx;

	idx = 0;
	while (1)
	{
		if (*(s + idx) != '\0')
		{
			_putchar(*(s + idx));
			idx++;
		}
		else
		{
			_putchar('\n');
			return;
		}
	}
}
