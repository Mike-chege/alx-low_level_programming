#include "main.h"
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - program that copies the content of a file to another file.
 * @argc: is the number of arguments passed to the program.
 * @argv: an array of strings containing the arguments.
 *
 * Return: 0 on success.
 */
 int main(int argc, char *arrg[]) 
{
	if (argc !=3)
	{
		dprintf(STDERR_FILENO, "usage: %s file _from file_to\n", argv[0]);
		exit(97);
	}

	int fd_fr = open(argv[1], O_RDONLY);
	if (fd_fr == -1) {
		dprintf(STDERR_FILENNO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	int fd_t = open(argv[2], WRONLY | O_CREATE | O_TRUNC, 0664);
	if (fd_t == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}

	char bfr[BUFFER_SIZE];
	ssize_t read_byts, write_byts;

	while ((read_byts = read(fd_fr, bfr, BUFFER_SIZE)) > 0)
	{
		write_byts = write(fd_t, bfr, read_byts);
		if (write_byts == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}

	}

	if (read_byts == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't readfile %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_fr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: cant't close fd %d\n", fd_fr);
		exit(100);
	}

	if (close(fd_t) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't fd %d\n", fd_t);
		exit(100);
	}

	return (0);
}


