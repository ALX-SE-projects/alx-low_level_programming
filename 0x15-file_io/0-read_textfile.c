#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file
 * @letters: length to read
 *
 * Return: length read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char c;
	FILE *f;
	unsigned int len = 0;

	f = fopen(filename, "r");
	while ((c = fgetc(f)) != EOF && letters)
	{
		putchar(c);
		len++;
		letters--;
	}
	fclose(f);
	return (len);
}
