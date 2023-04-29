#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

void print_error(const char* error_message)
{
	fprintf(stderr, "Error: %s\n", error_message);
	exit(98);
}
void print_elf_header_info(const Elf64_Ehdr* elf_header)
{	int i = 0;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i < EI_NIDENT; i++;)
	{
		printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");
	const char* elf_class = "unknown";
	switch (elf_header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			elf_class = "ELF32";
			break;
		case ELFCLASS64:
			elf_class = "ELF64";
			break;
	}
	printf("  Class:                              %s\n", elf_class);
	const char* elf_data = "unknown";
	switch (elf_header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			elf_data = "2's complement, little endian";
			break;
		case ELFDATA2MSB:
			elf_data = "2's complement, big endian";
			break;
	}
	printf("  Data:                               %s\n", elf_data);
	printf("  Version:                            %d (%s)\n", elf_header->e_ident[EI_VERSION], (elf_header->e_ident[EI_VERSION] == EV_CURRENT) ? "current" : "invalid");
	const char* osabi = "unknown";

	switch (elf_header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			osabi = "UNIX System V ABI";
			break;
		case ELFOSABI_HPUX:
			osabi = "HP-UX ABI";
			break;
		case ELFOSABI_NETBSD:
			osabi = "NetBSD ABI";
			break;
		case ELFOSABI_LINUX:
			osabi = "Linux ABI";
			break;
		case ELFOSABI_SOLARIS:
			osabi = "Solaris ABI";
			break;
		case ELFOSABI_IRIX:
			osabi = "IRIX ABI";
			break;
		case ELFOSABI_FREEBSD:
			osabi = "FreeBSD ABI";
			break;
		case ELFOSABI_TRU64:
			osabi = "TRU64 UNIX ABI";
			break;
		case ELFOSABI_ARM:
			osabi = "ARM architecture ABI";
			break;
		case ELFOSABI_STANDALONE:
			osabi = "Standalone (embedded) ABI";
			break;
	}
	printf("  OS/ABI:                             %s\n", osabi);
	printf("  ABI Version:                        %d\n", elf_header->e_ident[EI_ABIVERSION]);
	const char* elf_type = "unknown";

	switch (elf_header->e_type)
	{
		case ET_NONE:
			elf_type = "NONE (None)";
			break;
		case ET_REL:
			elf_type = "REL (Relocatable file)";
			break;
		case ET_EXEC:
			elf_type = "EXEC (Executable file)";
			break;
		case ET_DYN:
			elf_type = "DYN (Shared object file)";
			break;
		case ET_CORE:
			elf_type = "CORE (Core file)";
			break;
	}
	printf("  Type:                               %s\n", elf_type);
	printf("  Entry point address:                0x%lx\n", elf_header->e_entry);
	printf("  Start of program headers:           %ld (bytes into file)\n", elf_header->e_phoff);
	printf("  Start of section headers:           %ld (bytes into file)\n", elf_header->e_shoff);
	printf("  Flags:                              0x%x\n", elf_header->e_flags);
	printf("  Size of this header:                %d (bytes)\n", elf_header->e_ehsize);
	printf("  Size of program headers:            %d (bytes)\n", elf_header->e_phentsize);
	printf("  Number of program headers:          %d\n", elf_header->e_phnum);
	printf("  Size of section headers:            %d (bytes)\n", elf_header->e_shentsize);
	printf("  Number of section headers:          %d\n", elf_header->e_shnum);
	printf("  Section header string table index:  %d\n", elf_header->e_shstrndx);
}
int main(int argc, char** argv)
{
	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}
	const char* filename = argv[1];
	int fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		print_error(strerror(errno));
	}
	Elf64_Ehdr elf_header;
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error("Failed to read ELF header");
	}
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("File is not an ELF file");
	}
	print_elf_header_info(&elf_header);
	close(fd);
	return 0;
}
