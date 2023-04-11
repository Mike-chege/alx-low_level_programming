#include"main.h"
#include<fcntl.h>
#include<elf.h>

#define BUFF_SIZE 64

void print_magic(unsigned char *e_ident);
void print_class(unsigned char e_ident[EI_NIDENT]);
void print_data(unsigned char e_ident[EI_NIDENT]);
void print_version(unsigned char e_ident[EI_NIDENT]);
void print_osabi(unsigned char e_ident[EI_NIDENT]);
void print_abiversion(unsigned char e_ident[EI_NIDENT]);
void print_type(Elf64_Half e_type);
void print_entry(Elf64_Addr e_entry);


/**
 * main - displays information contained in the ELF header.
 * @argc: Is the number of arguments passsed to tthe program.
 * @argv: Is the array of pointers to the arguments.
 *
 * Return: 0 if successful, or an error code on failure.
 * 
 * usage: elf_header elf_filename
 * displayed information: magic, class, data, version, OS/ABI, ABI Version,
 * Entry point address.
 * format: is the same as readelf -h
 * if the file is not an elf exit code with 98.
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(1);
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(98);
    }

    unsigned char buf[BUF_SIZE];
    ssize_t nread;

    nread = read(fd, buf, BUF_SIZE);
    if (nread == -1) {
        fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    Elf64_Ehdr *ehdr = (Elf64_Ehdr *) buf;

    if (ehdr->e_ident[EI_MAG0] != ELFMAG0 ||
        ehdr->e_ident[EI_MAG1] != ELFMAG1 ||
        ehdr->e_ident[EI_MAG2] != ELFMAG2 ||
        ehdr->e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
        exit(98);
    }

    print_magic(ehdr->e_ident);
    print_class(ehdr->e_ident);
    print_data(ehdr->e_ident);
    print_version(ehdr->e_ident);
    print_osabi(ehdr->e_ident);
    print_abiversion(ehdr->e_ident);
    print_type(ehdr->e_type);
    print_entry(ehdr->e_entry);

    close(fd);

    return 0;
}

void print_magic(unsigned char *e_ident) {
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

void print_class(unsigned char e_ident[EI_NIDENT]) {
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS]) {
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
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
            break;
    }
}

void print_data(unsigned char e_ident[EI_NIDENT]) {
    printf("  Data:                              ");
    switch (e_ident[EI_DATA]) {
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
            printf("<unknown: %x>\n", e_ident[EI_DATA]);
            break;
    }
}

void print_version(unsigned char e_ident[EI_NIDENT]) {
    printf("  Version:                           ");
    switch (e_ident[EI_VERSION]) {
        case EV_NONE:
            printf("none\n");
            break;
        case EV_CURRENT:
            printf("1 (current)\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_VERSION]);
            break;
    }
}

void print_osabi(unsigned char e_ident[EI_NIDENT]) {
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI]) {
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
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        default:
            printf("<unknown: %x>\n", e_ident[EI_OSABI]);
            break;
    }
}

