#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * absu - get absolute value of an integer
 * Return: absolute balue of @value
 * @value: int to process
 */
unsigned int absu(int value)
{
	return ((value < 0) ? -((unsigned int)value) : (unsigned int)value);
}

/**
 * _pow - calculates power
 * Return: @x ** @n
 * @x: base
 * @n: exponent
 */
int _pow(int x, int n)
{
	int i, num;

	num = 1;
	for (i = 0; i < n; ++i)
		num *= x;
	return (num);
}

/**
 * print_number - prints an integer
 * @n: int to print
 */
void print_number(int n)
{
	int ones, digits, _, i;
	char *str;

	if (n < 0)
		_putchar('-');
	if (n != 0)
	{
		/* count digits */
		digits = 0;
		_ = n;
		while (1)
		{
			digits++;
			ones = n % 10;
			n = (n - ones) / 10;
			if (n == 0)
			{
				break;
			}
		}
		n = _;
		/* print int */
		str = (char *) malloc(digits * sizeof(char));
		for (i = 0; i < digits; i++)
		{
			str[digits - i - 1] = ('0' + absu(n % 10));
			n = ((n - (n % 10))) / 10;
		}
		for (i = 0; i < digits; i++)
			_putchar(str[i]);
	}
	else
		_putchar('0');
}

/**
 * _atoi - convert a str to an int
 * @s: ..
 * Return: int
*/

int _atoi(char *s)
{
	unsigned int nnn = 0;
	int sign = 1;
	int i = 0, digit_exist = 0, non_digit_exist = 0, comma_idx = -1;

	/* first, verify that no non-digit symbols exist */
	if (s[0] == '-')
		i++;
	while (s[i])
	{
		if (!(s[i] >= '0' && s[i] <= '9') && s[i] != ',')
			non_digit_exist = 1;
		else
		{
			digit_exist = 1;
			if (s[i] == ',')
			{
				comma_idx = i;
				while (s[comma_idx] != '\0')
				{
					s[comma_idx] = s[comma_idx + 1];
					comma_idx++;
				}
			}
		}
		i++;
	}
	if (digit_exist && non_digit_exist)
		return (-3425);
	else if (!digit_exist && non_digit_exist)
		return (-23425);
	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			nnn = (nnn * 10) + (*s - '0');
		else if (nnn > 0)
			break;
	} while (*s++);
	return (nnn * sign);
}

/**
 * main - entry point
 * @argc: args count
 * @argv: list of args
 * Return: 0 or 1
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int sum = 0, num, i;

	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = _atoi(argv[i]);
		if (num == -3425) /* Error */
		{
			char *err = "Error\n";
			int i = 0;

			while (err[i])
			{
				_putchar(err[i]);
				i++;
			}
			return (1);
		}
		else if (num == -23425) /* a word */
			continue;
		else
		sum += num;
	}
	print_number(sum);
	_putchar('\n');

	return (0);
}
