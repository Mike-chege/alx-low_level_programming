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
	char *bfr;
	ssize_t open_byts, read_byts, write_byts;

	if (filename == NULL)
		return (0);

	bfr = malloc(sizeof(char) * letters);
	if (bfr == NULL)
	{
		return (0);
	}

	open_byts = open(filename, O_RDONLY);
	read_byts = read(open_byts, letters);
	write_byts = write(STDOUT_FILENO, bfr, read_byts);

	if (open_byts == -1)
	{
		free(bfr);
		return (0);
	}

	if (read_byts == -1)
	{
		free(bfr);
		return (0);
	}

	if (write_byts == -1 || write_byts != read_byts)
	{
		free(bfr);
		return (0);
	}

	free(bfr);
	close(fd);

	return (write_byts);
}

