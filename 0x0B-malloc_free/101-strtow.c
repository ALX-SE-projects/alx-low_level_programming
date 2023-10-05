#include "main.h"
#include <stdlib.h>

/**
 * create_wd - make a word & insert it into the arr
 * @_words: the arr of strings
 * @_str: the string
 * @_start: the begain idx of the word
 * @_end: the stopping idx of the word
 * @idx: the idx of the arr to insert the word
 */
void create_wd(char **_words, char *_str, int _start, int _end, int idx)
{
	int i, j;

	i = _end - _start;
	_words[idx] = (char *) malloc((i + 1) * sizeof(char));
	for (j = 0; _start < _end; _start++, j++)
		_words[idx][j] = _str[start];
	_words[idx][j] = '\0';
}

/**
 * utill - a util fn for getting words into an arr
 * @_words: the strings arr
 * @_str:  string
 */
void utill(char **_words, char *_str)
{
	int i, j;
	int _start, _flag;

	i = j = 0;
	_flag = 0;
	while (_str[i])
	{
		if (_flag == 0 && _str[i] != ' ')
		{
			_flag = 1;
			_start = i;
		}
		if (_str[i - 1] != ' ' && i > 0 && _str[i] == ' ')
		{
			create_wd(_words, _str, _start, i, j);
			flag = 0;
			j++;
		}
		i++;
	}
	if (_flag == 1)
	{
		create_wd(_words, _str, _start, i, j);
	}
}

/**
 * strtow - splits a str into words.
 * @str: string
 * Return: a ptr to an arr of strings
 */
char **strtow(char *str)
{
	int i, _flag
	int _len;
	char **_words;

	if ((_str[0] == ' ' && _str[1] == '\0') || _str[0] == '\0' || _str == 0)
	{
		return (0);
	}

	i = _flag = 0;
	_len = 0;
	while (_str[i])
	{
		if (_str[i] != ' ' && _flag == 0)
		{
			flag = 1;
		}
		if (i > 0  && _str[i - 1] != ' ' && _str[i] == ' ')
		{
			len++;
			flag = 0;
		}
		i += 1;
	}

	len += ((_flag == 1) ? 1 : 0);
	if (!len)
	{
		return (0);
	}
	_words = (char **) malloc((len + 1) * sizeof(char *));
	if (_words == 0)
		return (0);

	utill(_words, _str);
	_words[_len] = 0;
	return (_words);
}




