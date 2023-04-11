#include"main.h"
#include<fcntl.h>
#include<elf.h>

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
