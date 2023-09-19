#include"main.h"
/**
 * puts_half - get length of a string.
 * @str: pointer to string to calc its length
 */
void puts_half(char *str)
{
	int oo, xx;

	for (oo = 0; str[oo] != '\0'; ++oo)
		;

	if (oo % 2 == 0)
	{
		for (xx = oo / 2; str[xx] != '\0'; ++xx)
			_putchar(str[xx]);
	} else
	{
		for (xx = ((oo - 1) / 2) + 1; str[xx] != '\0'; ++xx)
			_putchar(str[xx]);
	}
	_putchar('\n');
}
