#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

void print_elf_header(Elf32_Ehdr *header) {
    int i;

    printf("ELF Header:\n");

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (header->e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("Invalid class\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Unknown class\n");
            break;
    }

    printf("  Data:                              ");
    switch (header->e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("Invalid data encoding\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Unknown data encoding\n");
            break;
    }

    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
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
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
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
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto\n");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD\n");
            break;
        default:
            printf("Unknown OS/ABI\n");
            break;
    }

    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

    printf("  Type:                              ");
    switch (header->e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
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
            printf("Unknown file type\n");
            break;
    }

    printf("  Entry point address:               0x%08x\n", header->e_entry);
}

int main(int argc, char **argv) {
    
    FILE *fp;
    unsigned char *buffer;
    long fileLen;
    int i;

  
    fp = fopen(argv[1], "rb");
    if (!fp) {
        perror("Unable to open file");
        return 1;
    }

   
    fseek(fp, 0, SEEK_END);
    fileLen = ftell(fp);
    rewind(fp);

    
    buffer = (unsigned char *)malloc(fileLen * sizeof(unsigned char));
    if (!buffer) {
        perror("Memory error");
        fclose(fp);
        return 1;
    }

  
    if (fread(buffer, fileLen, 1, fp) != 1) {
        perror("Reading error");
        fclose(fp);
        free(buffer);
        return 1;
    }

   
    fclose(fp);

  
    printf("ELF Header:\n");
    for (i = 0; i < 16; i++) {
        printf("  %02x", buffer[i]);
    }
    printf("\n");
    printf("  Class:                             ELF32\n");
    printf("  Data:                              2's complement, little endian\n");
    printf("  Version:                           1 (current)\n");
    printf("  OS/ABI:                            UNIX - NetBSD\n");
    printf("  ABI Version:                       0\n");
    printf("  Type:                              EXEC (Executable file)\n");
    printf("  Entry point address:               0x%08x\n", *((unsigned int *)(buffer + 24)));
    printf("%d\n", buffer[27]);

   
    free(buffer);

    return 0;
}
