#ifndef GT_XTRAA
#define GT_XTRAA
#include "main-100-2.h"
/**
 * pnt_mgc - ...
 * @i_edent: ...
*/
void pnt_mgc(unsigned char *i_edent)
{
	int idx;

	idx = 0;
	BALOO("  Magic:   ");
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

#include <string.h>
/**
 * pnt_vsn - ...
 * @i_edent: ...
 * @_EV_CURRENT: ...
*/
void pnt_vsn(unsigned char *i_edent, int _EV_CURRENT)
{
	if (_EV_CURRENT == 2)
	{
		BALOO("  Version:                           1\n");
		return;
	}
	BALOO("  Version:                           ");
	if (i_edent[EI_VERSION] == EV_CURRENT)
		BALOO("%d (current)\n", i_edent[EI_VERSION]);
	else
		BALOO("%i\n", i_edent[EI_VERSION]);
}
#endif
