#include"main.h"
#include<fcntl.h>
/**
 * read_textfile reads - a text file and prints it to POSIX standard output.
 * @filename: it points to the file name.
 * @letters: total number of letters to print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *bfr;
	ssize_t read_byts, write_byts;

	if (filename == NULL)
		return (0);

	int fd = open(filename,	O-RDONLY);
	if (fd == -1)
		return (0);
	char *bfr = malloc(sizeof(char) * (letters + 1));
	if (bfr == NULL)
		return (0);
	
	ssize_t read_byts = read(fd, bfr, letters);
	if (read_byts == -1)
	{
		free(bfr);
		close(fd);
		return (0);
	}

	bfr[read_byts] = '\0';

	ssize_t write_byts = write(STDUOT_FILENO, bfr, read_byts);
	if (write_byts == -1 || write_byts != read_byts)
	{
		free(bfr);
		close(fd);
		return (0);
	}

	free(bfr);
	close(fd);

	return (write_byts);
}

