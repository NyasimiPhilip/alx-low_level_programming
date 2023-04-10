#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 128

void print_elf_header(int file_descriptor);

int main(int argc, char **argv)
{
	int file_descriptor;

	if (argc != 2)
	{
		printf("Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	print_elf_header(file_descriptor);
	if (close(file_descriptor) == -1)
	{
		perror("close");
		exit(EXIT_FAILURE);
	}
	return (0);
}
void print_elf_header(int file_descriptor)
{
	Elf32_Ehdr header;
	int num_bytes_read;

	num_bytes_read = read(file_descriptor, &header, sizeof(header));
	if (num_bytes_read == -1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
	else if (num_bytes_read != sizeof(header))
	{
		fprintf(stderr, "Error: Failed to read ELF header\n");
		exit(EXIT_FAILURE);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
			break;
	}
	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
			break;
	}
	printf("  Version:                           %d", header.e_ident[EI_VERSION]);
	switch (header.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
			break;
	}
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_type);
			break;
	}
	printf("  Machine:                           ");
	switch (header.e_machine)
	{
		case EM_NONE:
			printf("None\n");
			break;
		case EM_386:
			printf("Intel 80386\n");
			break;
		case EM_X86_64:
			printf("AMD x86-64 architecture\n");
			break;
		case EM_ARM:
			printf("ARM\n");
			break;
		case EM_AARCH64:
			printf("AArch64 (ARM 64-bit)\n");
			break;
		case EM_RISCV:
			printf("RISC-V\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_machine);
			break;
	}
	printf("  Version:                           0x%x\n", header.e_version);
	printf("  Entry point address:               0x%x\n", header.e_entry);
	printf("  Start of program headers:          %d (bytes into file)\n", header.e_phoff);
	printf("  Start of section headers:          %d (bytes into file)\n", header.e_shoff);
	printf("  Flags:                             0x%x\n", header.e_flags);
	printf("  Size of this header:               %d (bytes)\n", header.e_ehsize);
	printf("  Size of program headers:           %d (bytes)\n", header.e_phentsize);
	printf("  Number of program headers:         %d\n", header.e_phnum);
	printf("  Size of section headers:           %d (bytes)\n", header.e_shentsize);
	printf("  Number of section headers:         %d\n", header.e_shnum);
	printf("  Section header string table index: %d\n", header.e_shstrndx);
}
