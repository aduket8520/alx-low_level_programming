#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

#define BUFFER_SIZE 1024

void print_error(char *msg)
{
  fprintf(stderr, "Error: %s\n", msg);
}

void print_elf_header(Elf64_Ehdr *header)
{
  printf("ELF Header:\n");
  printf("  Magic:   ");

  int i;
  for (i = 0; i < EI_NIDENT; i++)
  {
    printf("%02x ", header->e_ident[i]);
  }
  printf("\n");
  printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "invalid");
  printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "invalid");
  printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
  printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "unknown");
  printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
  printf("  Type:                              ");
  switch (header->e_type)
  {
  case ET_NONE:
    printf("NONE (Unknown type)\n");
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
    printf("<unknown>\n");
    break;
  }
  printf("  Entry point address:               %#lx\n", header->e_entry);
}

int main(int argc, char **argv)
{
  char *filename;
  if (argc != 2)
  {
    print_error("Usage: elf_header elf_filename");
    exit(98);
  }

  filename = &argv[1];
  int fd = open(filename, O_RDONLY);
  if (fd == -1)
  {
    char msg[256];
    snprintf(msg, sizeof(msg), "Can't open file %s", filename);
    print_error(msg);
    exit(98);
  }

  Elf64_Ehdr header;
  if (read(fd, &header, sizeof(header)) != sizeof(header))
  {
    char msg[256];
    snprintf(msg, sizeof(msg), "Can't read ELF header from file %s", filename);
    print_error(msg);
    exit(98);
  }

  if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
  {
    char msg[256];
    snprintf(msg, sizeof(msg), "File %s is not an ELF file", filename);
    print_error(msg);
    exit(98);
  }

  print_elf_header(&header);

  if (close(fd) == -1)
  {
    char msg[256];
    snprintf(msg, sizeof(msg), "Can't close file descriptor %d", fd);
    print_error(msg);
    exit(100);
  }

  return 0;
}
