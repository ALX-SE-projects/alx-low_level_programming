#include <stdio.h>
#include <unistd.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>
/**
 * create_file - creates a file.
 * @filename: filename
 * @text_content: content in text
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, wrds = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	while (text_content)
	{
		while (text_content[wrds] != '\0')
		{
			wrds++;
		}
		if ((int) write(file, text_content, wrds) == -1)
			return (-1);
	}
	close(file);
	return (1);
}
