#include "main.h"
/**
 * rev_string -  reverses a strong.
 * @s: poonter to strong to reverse;
 */
void rev_string(char *s)
{
	int c, x;
	char ccc;

	for (x = 0; s[x] != '\0'; ++x)
	{}

	for (o = 0; o < x / 2; ++o)
	{
		ccc = s[o];
		s[o] = s[x - 1 - o];
		s[x - 1 - o] = ccc;
	}

}
