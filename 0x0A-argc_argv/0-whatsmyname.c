#include "main.h"
/**
 * main - entry point
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	while (1)
	{
		if (!argv[0][i])
			break;
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
