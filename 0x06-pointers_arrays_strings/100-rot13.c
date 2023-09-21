#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * Return: encoded string
 * @s: string to be encoded 
 */
char *rot13(char *s)
{
	int step[] = {-13, 13};
	int i;
	char c;

	i = 0;
	while (s[i])
	{
		c = s[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			s[i] += step[(c < 'N' && c >= 'A') || (c < 'n' && c >= 'a')]; 
		}
		i++;
	}
	return (s);
}
