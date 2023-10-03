#include "main.h"

/**
 * is_elf_file - .....
 * @fd: .....
 * Return: 1 if an elf file
 */
int is_elf_file(int fd)
{
	char elf_magic[4];

	if (read(fd, elf_magic, sizeof(elf_magic)) != sizeof(elf_magic))
	{
		perror("read");
		exit(98);
	}
	if (memcmp(elf_magic, "\x7F\x45\x4C\x46", 4) != 0)
		return (0);
	return (1);
}

/**
 * display_elf_header - .......
 * @fd: .....
 * Return: ......
 */
void display_elf_header(int fd)
{
	Elf64_Ehdr elf_header;

	if (read(fd, &elf_header, sizeof(elf_header))
			!= sizeof(elf_header))
	{
		perror("read");
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n", elf_header.e_ident[0],
			elf_header.e_ident[1], elf_header.e_ident[2], elf_header.e_ident[3]);
	printf("  Class:                             ELF%d\n",
			elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("  Data                              2's complement, %s endian\n",
			elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big");
	printf("  OS/ABI:                            UNIX - %s\n",
			elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "System V" : "Other");
	printf("  ABI Version:                       %d\n",
			elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s (Executable file)\n",
			elf_header.e_type == ET_EXEC ? "EXEC" : "Other");
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)elf_header.e_entry);
}

/**
 * main - the entry pint
 * @argc: arg count
 * @argv: the arg vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		perror("open");
		return (98);
	}


	if (!is_elf_file(fd))
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}
	display_elf_header(fd);
	close(fd);
	return (0);
}
