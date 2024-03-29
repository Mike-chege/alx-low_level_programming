#include"main.h"
#include<fcntl.h>

/**
 * create_file - function that creates a file.
 * @filename: is the name of the to create.
 * @text_content: is the string to write the file.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int create_file(const char *filename, char *text_content)
{
	int open_byts, byts_write, num = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	open_byts = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	byts_write = write(open_byts, text_content, num);

	if (open_byts == -1 || byts_write == -1)

		return (-1);
	
	close(open_byts);

	return (1);
}

