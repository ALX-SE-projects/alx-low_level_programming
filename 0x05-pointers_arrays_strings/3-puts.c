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
		if (*(str + idx) != '\0')
		{
			_putchar(*(str + idx));
			idx++;
		}
		else
		{
			_putchar('\n');
			return;
		}
	}
}
