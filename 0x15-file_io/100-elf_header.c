#include "main.h"
#include <elf.h>

void print_osabi_more(Elf64_Ehdr h);

/**
 * print_magic - function prints ELF magic bytes
 * @h: ELF header struct
*/
void print_magic(Elf64_Ehdr h)
{
	int itr;

	printf("  Magic:   ");
	for (itr = 0; itr < EI_NIDET; itr++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\N" : " ");
}

/**
 * print_class - function prints ELF class
 * @h: ELF header struct
*/

void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_data - function print ELF data
 * @h: ELF header struct
*/

void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
		break;
		case ELFDATA2LSB:
			printf("2's complement, little endian");
		break;
		case ELFDATANONE:
			printf("none");
		break;
	}
	printf("\n");
}

/**
 * print_version - function print ELF version
 * @h: ELF header struct
*/

void print_version(Elf64_Ehdr h)
{
	printf("  Version:                          %d" h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - function print ELF osabi
 * @h: ELF heaer struct
*/

void print_osabi(Elf64_Ehdr h)
{
	printf(" OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
	}
	printf("\n");
}

/**
 * print_osabi_more - function print ELF osabi more
 * @h: ELF header struct
*/

void print_osabi_more(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_STANDALONE:
			printf("standalone App");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion - function print ELF ABI version
 * @h: ELF header struct
*/

void print_abriversion(Elf64_Ehdr h)
{
	printf(" ABI Version:                       %d\n",
			h.e_ident[EI_ABIVERSION]);
}

/**
 * prit_type - function prints ELF type
 * @h: ELF header struct
*/

void print_type(Elf64_Ehdr h)
{
	char *pointer = (char *)&h.e_type;
	int itr = 0;

	printf(" Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		itr = 1;
	switch (pointer[itr])
	{
		case ET_NONE:
			printf("NONE (None)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknow>: %x", pointer[itr]);
		break;
	}
	printf("\n");
}

/**
 * print_entry - function print ELF entry point address
 * @h: ELF header struct
*/

void print_entry(Elf6_Ehdr h)
{
	int itr = 0, length = 0;
	unsigned char *pointer = (unsigned char *)&h.e_entry;

	printf(" Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		itr = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!pointer[itr])
			itr--;
		printf("%x", pointer[itr--]);
		for (; itr >= 0; itr--)
			printf("%02x", pointer[itr]);
		printf("\n");
	}
	else
	{
		itr = 0;
		length = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!pointer[itr])
			itr++;
		printf("%x", pointer[itr++]);
		for (; itr <= length; itr++)
			printf("%02x", pointer[itr]);
		printf("\n");
	}
}

/**
 * main - Entry point
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 on failure
*/

int main(int ac, char **av)
{
	int file;
	Elf64_Ehdr header;
	ssize_t bytes;

	if (ac != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	file = open(av[1], O_RDONLY);
	if (file == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", av[1]), exit(98);
	bytes = read(file, &header, sizeof(header))
	if (bytes < 1, || bytes != sizeof(header))
		dprint(STDERR_FILENO, "Can't read from file: %s\n", av[1], exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' &&
		h.e_ident[2] == 'L' && h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF FILE: %s\n", av[1]), exit(98);

	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_osabi(header);
	print_abiversion(header);
	print_type(header);
	print_entry(header);
	if (close(file))
	dprint(STDERR_FILENO, "Error closing file descriptor: %d\n", file), exit(98);

	return (EXIT_SUCCESS);
}
