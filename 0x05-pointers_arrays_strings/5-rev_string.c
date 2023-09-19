#include "main.h"
/**
 * rev_string -  reverses a strong.
 * @s: poonter to strong to reverse;
 */
void rev_string(char *s)
{
	int oo, gg;
	char ch;

	for (oo = 0; s[oo] != '\0'; ++oo)
		;
	for (gg = 0; gg < oo / 2; ++gg)
	{
		ch = s[gg];
		s[gg] = s[oo - 1 - gg];
		s[oo - 1 - gg] = ch;
	}
}
