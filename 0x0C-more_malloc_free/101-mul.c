#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _len - get the len of str
 * @_str: string to get its len
 * Return: len of @_str
*/

int _len(char *_str)
{
	int _i = 0;

	while (_str[_i] != '\0')
	{
		_i = _i + 1;
	}
	return (_i);
}

/**
 * ___memset - fill mem with a const byte
 *
 * @_s: input ptr that represents mem block to fill
 * @_b: char to fill
 * @_n: num of bytes to be filled
 * Return: ptr to the filled mem block
*/

char *___memset(char *_s, char _b, unsigned int _n)
{
	unsigned int _i = 0;

	while (_i < _n)
	{
		_s[_i] = _b;
		_i = _i + 1;
	}
	return (_s);
}

/**
 * ___calloc - allocates mem for an arr using ___memset
 * @_nmemb: size of att
 * @_size: size of each item
 * Return: ptr to new allocated mem block
*/

void *___calloc(unsigned int _nmemb, unsigned int _size)
{
	char *_ptr;

	if (_size == 0 || _nmemb == 0)
	{
		return (0);
	}
	_ptr = malloc(_nmemb * _size);
	if (_ptr == 0)
	{
		return (0);
	}
	___memset(_ptr, 0, _nmemb * _size);
	return (_ptr);
}

/**
 * mul - init arr with 0 byte
 * @_s1: string 1
 * @_s2: string 2
*/

void mul(char *_s1, char *_s2)
{
	int _res = 0, _tmp;
	int _i, _l1, _l2, _total_l;
	char *_ptr;
	int _f_digit, _s_digit;
	void *_temp;

	_l2 = _len(_s2);
	_l1 = _len(_s1);
	_tmp = _l2;
	_total_l = _l1 + _l2;
	_ptr = ___calloc(sizeof(int), _total_l);
	_temp = _ptr;

	for (_l1--; _l1 >= 0; _l1--)
	{
		_f_digit = _s1[_l1] - '0';
		_res = 0;
		_l2 = _tmp;

		for (_l2--; _l2 >= 0; _l2--)
		{
			_s_digit = _s2[_l2] - '0';
			_res = _res + _ptr[1 + _l2 + _l1] + (_s_digit * _f_digit);
			_ptr[_l1 + 1 + _l2] = _res % 10;
			_res = _res / 10;
		}
		if (_res != 0)
			_ptr[1 + _l1 + _l2] = _res % 10;
	}

	while (*_ptr == 0)
	{
		_total_l = _total_l - 1;
		_ptr = _ptr + 1;
	}

	for (_i = 0; _i < _total_l; _i++)
		printf("%i", _ptr[_i]);
	printf("\n");
	free(_temp);
}

/**
 * __err_exit - prints err code 98 and exit
 * Return: err 98
*/

int __err_exit(void)
{
	char *_err;
	int _i;

	_err = "Error";
	for (_i = 0; _err[_i] != '\0'; _i++)
	{
		_putchar(_err[_i]);
	}
	_putchar('\n');
	exit(98);
}

/**
 * __chk_num - chk if str has nums only
 * @_str: string to chk
 * Return: 0 is true 1 otherwise
*/

int __chk_num(char *_str)
{
	while (*_str != '\0')
	{
		if (*_str > '9' || *_str < '0')
			return (1);
		_str = _str + 1;
	}
	return (0);
}

/**
 * main - entry point
 * Return: 0 on success || 98 on fail
 * @argc: num of args
 * @argv: args arr
*/

int main(int argc, char *argv[])
{
	char *_n1 = argv[1];
	char *_n2 = argv[2];

	if (argc != 3 || __chk_num(_n2) || __chk_num(_n1))
		__err_exit();

	if (*_n2 == '0' || *_n1 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		mul(_n1, _n2);
	}
	return (0);
}
