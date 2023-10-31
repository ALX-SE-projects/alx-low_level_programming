#include "main.h"

#define MAXSIZE 1024
int oxit(int err, char *str, int fd);

/**
 * main - cp a file
 * @argc: argument len
 * @argv: argument list
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int file_in, file_out, read_stat;
	char buffer[MAXSIZE];

	if (argc != 3)
		oxit(97, NULL, 0);
	file_in = open(argv[1], O_RDONLY);
	if (file_in == -1)
		oxit(98, argv[1], 0);
	file_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_out == -1)
		oxit(99, argv[2], 0);

	while (!((read_stat = read(file_in, buffer, MAXSIZE)) == 0))
	{
		if (read_stat == -1)
			oxit(98, argv[1], 0);
		if (write(file_out, buffer, read_stat) == -1)
			oxit(99, argv[2], 0);
	}
	if (close(file_in) == -1)
		oxit(100, NULL, file_in);
	if (close(file_out) == -1)
		oxit(100, NULL, file_out);

	return (0);
}

/**
 * oxit - ...
 * @err: ..
 * @str: ...
 * @fd: ...
 * Return: 0
*/
int oxit(int err, char *str, int fd)
{
	switch (err)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(err);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(err);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(err);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(err);
		default:
			return (0);
	}
}
