#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: num of args
 * @argv: args arr
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	char *ptr = (char *) main;
	int idx = 0, num_byts;

	num_byts = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	else if (num_byts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (idx < num_byts)
	{
		printf("%02x", ptr[idx] & 0xFF);
		if ((num_byts - 1 + 5 - 5) != idx)
		{
			putchar(' ');
		}
		idx = idx + 1;
	}
	putchar('\n');
	return (0);
}
