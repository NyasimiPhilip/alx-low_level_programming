#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#ifdef __NetBSD__
#include <sys/exec_elf.h>
#endif

int main(int argc, char** argv) {
    const char* filename;
    int fd, rc = 1;
    struct stat stat_buf;
    Elf64_Ehdr header;
    const char* elf_data = "unknown";

    if (argc != 2) {
        fprintf(stderr, "usage: %s file\n", argv[0]);
        return 1;
    }

    filename = argv[1];

    if ((fd = open(filename, O_RDONLY)) < 0) {
        perror("open");
        return 1;
    }

    if (fstat(fd, &stat_buf) < 0) {
        perror("fstat");
        goto out;
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        perror("read");
        goto out;
    }

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "%s is not an ELF file\n", filename);
        goto out;
    }

    switch (header.e_ident[EI_CLASS]) {
        case ELFCLASS32:
            elf_data = "32-bit";
            break;

        case ELFCLASS64:
            elf_data = "64-bit";
            break;
    }

    printf("%s ELF %s %s\n", filename, elf_data,
           header.e_ident[EI_DATA] == ELFDATA2MSB ? "big endian" : "little endian");

    printf("entry point: %lx\n", header.e_entry);

    printf("start of section headers: %ld (bytes into file)\n", header.e_shoff);

    printf("number of section headers: %d\n", header.e_shnum);

    printf("size of section headers: %d (bytes)\n", header.e_shentsize);

    printf("start of program headers: %ld (bytes into file)\n", header.e_phoff);

    printf("number of program headers: %d\n", header.e_phnum);

    printf("size of program headers: %d (bytes)\n", header.e_phentsize);

#ifdef __NetBSD__
    switch (header.e_machine) {
        case EM_NETBSD:
            printf("This ELF file is compiled for NetBSD\n");
            break;
        default:
            printf("This ELF file is not compiled for NetBSD\n");
            break;
    }
#else
    printf("This ELF file is not compiled for NetBSD\n");
#endif

    rc = 0;

out:
    close(fd);
    return rc;
}
