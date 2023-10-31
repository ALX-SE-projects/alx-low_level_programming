#ifndef HD
#define HD
#include <stdio.h>
#include <unistd.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>
#define BALOO printf
#define dBALOO dprintf
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/**
 * cls_fl - ...
 * @olf: ...
*/
void cls_fl(int olf)
{
	if (close(olf) == -1)
	{
		dBALOO(STDERR_FILENO,
			"Error: Can't close fd %d\n", olf);
		exit(98);
	}
}

/**
 * pnt_mgc - ...
 * @i_edent: ...
*/
void pnt_mgc(unsigned char *i_edent)
{
	int idx;

	idx = 0;
	BALOO("  Magic    ");
	while (idx < EI_NIDENT)
	{
		BALOO("%02x", i_edent[idx]);
		if (idx != EI_NIDENT - 1)
			BALOO(" ");
		else
			BALOO("\n");
		idx++;
	}
}

/**
 * chk_if_elf - checks ...
 * @i_edent: ...
*/
void chk_if_elf(unsigned char *i_edent)
{
	int idx;

	idx = 0;
	while (idx < 4)
	{
		if (i_edent[idx] != 127 &&
		    i_edent[idx] != 'L' &&
		    i_edent[idx] != 'E' &&
		    i_edent[idx] != 'F')
		{
			dBALOO(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		idx++;
	}
}

/**
 * pnt_dta - ...
 * @i_edent: ...
*/
void pnt_dta(unsigned char *i_edent)
{
	BALOO("  Data:                              ");
	switch (i_edent[EI_DATA])
	{

		case ELFDATA2LSB:
			BALOO("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			BALOO("2's complement, big endian\n");
			break;
		case ELFDATANONE:
			BALOO("none\n");
			break;
		default:
			BALOO("<unknown: %x>\n", i_edent[EI_DATA]);
	}
}

/**
 * pnt_cls - ...
 * @i_edent: ...
*/
void pnt_cls(unsigned char *i_edent)
{
	BALOO("  Class:                             ");
	switch (i_edent[EI_CLASS])
	{
		case ELFCLASS32:
			BALOO("ELF32\n");
			break;
		case ELFCLASS64:
			BALOO("ELF64\n");
			break;
		case ELFCLASSNONE:
			BALOO("none\n");
			break;
		default:
			BALOO("<unknown: %x>\n", i_edent[EI_CLASS]);
	}
}

/**
 * pnt_vsn - ...
 * @i_edent: ...
*/
void pnt_vsn(unsigned char *i_edent)
{
	BALOO("  Version:                           ");
	if (i_edent[EI_VERSION] != EV_CURRENT)
		BALOO("%i\n", i_edent[EI_VERSION]);
	else
		BALOO("%d (current)\n", i_edent[EI_VERSION]);
}
#endif
