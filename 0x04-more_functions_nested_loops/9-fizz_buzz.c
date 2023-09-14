#include <stdio.h>
/**
 * main - Fizz-Buzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((!(i % 5)) && (!(i % 3)))
		{
			printf("FizzBuzz");
		}
		else if (!(i % 3))
		{
			printf("Fizz");
		}
		else if (!(i % 5))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
