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
#define GT_XTRAA
#include "main.h"
#include <string.h>

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
			BALOO("EXEC (Executable file)\n");
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
		e_entry = (0xFF00FF00 & (e_entry << 8)) |
			  (0xFF00FF & (e_entry >> 8));
		e_entry = (e_entry >> 16) | (e_entry << 16);
	}

	if (i_edent[EI_CLASS] != ELFCLASS32)
		BALOO("%#lx\n", e_entry);
	else
		BALOO("%#x\n", (unsigned int)e_entry);
}

/**
 * main - ss
 * Return: int
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
	pnt_vsn(elf->e_ident, argv[1]);
	pnt_osb(elf->e_ident);
	pnt_abi(elf->e_ident);
	pnt_type(elf->e_type, elf->e_ident);
	pnt_entry(elf->e_entry, elf->e_ident);
	FREE(elf);
	cls_fl(olf);
	return (0);
}
