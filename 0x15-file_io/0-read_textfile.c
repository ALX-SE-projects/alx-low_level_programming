#include <stdio.h>
#include <unistd.h>
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

	if (!filename)
		return (0);
	if (access(filename, R_OK) == -1)
		return (0);

	f = fopen(filename, "r");
	if (!f)
		return (0);
	while ((c = fgetc(f)) != EOF && letters)
	{
		write(STDOUT_FILENO, &c, 1);
		len++;
		letters--;
	}
	fclose(f);
	return (len);
}
