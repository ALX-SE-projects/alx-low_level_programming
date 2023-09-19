#include "main.h"
/**
 * puts2 - get length of a string.
 * @str: pointer to string to calc its length
 */
void puts2(char *str)
{
	int oo;

	for (oo = 0; str[oo] != '\0'; ++oo)
	{
		if (oo % 2 == 0)
			_putchar(str[oo]);
	}
	_putchar('\n');
}
