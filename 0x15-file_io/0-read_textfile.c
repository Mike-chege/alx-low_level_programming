#include"main.h"
#include<fcntl.h>

/**
 * read_textfile reads - a text file and prints it to standard output.
 * @filename: the name of the file to read.
 * @letters: maximum number of letters to read.
 *
 * Return: 0 if an error occurs, or the number of bytes read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bfr;
	ssize_t open_byts, read_byts, write_byts;

	if (filename == NULL)
		return (0);

	bfr = malloc(sizeof(char) * letters);
	if (bfr == NULL)
		return (0);

	open_byts = open(filename, O_RDONLY);
	read_byts = read(open_byts, bfr, letters);
	write_byts = write(STDOUT_FILENO, bfr, read_byts);

	if (open_byts == -1)
	{
		free(bfr);
		return (0);
	}

	if (read_byts == -1)
	{
		free(bfr);
		close(open_byts);
		return (0);
	}

	if (write_byts == -1 || write_byts != read_byts)
	{
		free(bfr);
		close(open_byts);
		return (0);
	}

	free(bfr);
	close(open_byts);

	return (write_byts);
}
