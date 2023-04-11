#include"main.h"
#include<fcntl.h>
#include<string.h>
#include<errno.h>
#define BUFFER_SIZE 1024

/**
 * main - copies the contents of one file to another file.
 * @argc: Is the number of arguments to the program.
 * @argv: Is an array of pointers to the arguments.
 *
 * Return: 0 on success, or an error code if any failure.
 */
int main(int argc, char *argv[])
{	
    int fd_fr, fd_t, read_byts, write_byts;
    char bfr[BUFFER_SIZE];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    /* Opening the source file for reading */
    fd_fr = open(argv[1], O_RDONLY);
    if (fd_fr == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Opening the destination file for writing */
    fd_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_t == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    while ((read_byts = read(fd_fr, bfr, BUFFER_SIZE)) > 0)
    {
        write_byts = write(fd_t, bfr, read_byts);
        if ( write_byts == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (read_byts == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    /* Closing the file descriptors */
    if (close(fd_fr) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_fr);
        exit(100);
    }

    if (close(fd_t) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t);
        exit(100);
    }

    return (0);
}

