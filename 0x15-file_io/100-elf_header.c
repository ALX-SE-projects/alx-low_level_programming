#include "main.h"
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
#define FREE free
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

/**
 * pnt_osb - ...
 * @i_edent: ...
*/
void pnt_osb(unsigned char *i_edent)
{
	BALOO("  OS/ABI:                            ");
	switch (i_edent[EI_OSABI])
	{
		case ELFOSABI_NETBSD:
			BALOO("UNIX - NetBSD\n");
			break;
		case ELFOSABI_AIX:
			BALOO("UNIX - AIX\n");
			break;
		case ELFOSABI_LINUX:
			BALOO("UNIX - Linux\n");
			break;
		case ELFOSABI_FREEBSD:
			BALOO("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			BALOO("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			BALOO("UNIX - IRIX\n");
			break;
		case ELFOSABI_TRU64:
			BALOO("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			BALOO("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			BALOO("Standalone App\n");
			break;
		case ELFOSABI_SYSV:
			BALOO("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			BALOO("UNIX - HP-UX\n");
			break;
		default:
			BALOO("<unknown: %x>\n", i_edent[EI_OSABI]);
	}
}

/**
 * pnt_abi - ...
 * @i_edent: ...
*/
void pnt_abi(unsigned char *i_edent)
{
	BALOO("  ABI Version:                       %d\n",
		i_edent[EI_ABIVERSION]);
}
/**
 * pnt_type - ...
 * @e_type: ...
 * @i_edent: ...
*/
void pnt_type(unsigned int e_type, unsigned char *i_edent)
{
	if (i_edent[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	BALOO("  Type:                              ");
	switch (e_type)
	{
		case ET_REL:
			BALOO("REL (Relocatable file)\n");
			break;
		case ET_NONE:
			BALOO("NONE (Unknown type)\n");
			break;
		case ET_EXEC:
			BALOO("EXEC (Exexutable file)\n");
			break;
		case ET_CORE:
			BALOO("CORE (Core file)\n");
			break;
		case ET_DYN:
			BALOO("DYN (Shared object file)\n");
			break;
		default:
			BALOO("<unknown: %x\n", e_type);
	}
}

/**
 * pnt_entry - ...
 * @e_entry: ...
 * @i_edent: ...
*/
void pnt_entry(unsigned long int e_entry, unsigned char *i_edent)
{
	BALOO("  Entry point address:               ");
	if (i_edent[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = (0xFF00FF00 &(e_entry << 8)) |
			  (0xFF00FF & (e_entry >> 8));
		e_entry = (e_entry >> 16) | (e_entry << 16);
	}

	if (i_edent[EI_CLASS] != ELFCLASS32)
		BALOO("%#lx\n", e_entry);
	else
		BALOO("%#x\n", (unsigned int)e_entry);
}

/**
 * main - ...
 * @argc: arg len
 * @argv: arg arr
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int olf, rff;
	Elf64_Ehdr *elf;

	olf = open(argv[1], O_RDONLY);
	if (olf == -1)
	{
		dBALOO(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	elf = malloc(sizeof(Elf64_Ehdr));
	if (elf == NULL)
	{
		cls_fl(olf);
		FREE(elf);
		dBALOO(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rff = read(olf, elf, sizeof(Elf64_Ehdr));
	if (rff == -1)
	{
		FREE(elf);
		cls_fl(olf);
		dBALOO(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	chk_if_elf(elf->e_ident);
	BALOO("ELF Header:\n");
	pnt_mgc(elf->e_ident);
	pnt_cls(elf->e_ident);
	pnt_dta(elf->e_ident);
	pnt_vsn(elf->e_ident);
	pnt_osb(elf->e_ident);
	pnt_abi(elf->e_ident);
	pnt_type(elf->e_type, elf->e_ident);
	pnt_entry(elf->e_entry, elf->e_ident);
	FREE(elf);
	cls_fl(olf);
	return (0);
}
