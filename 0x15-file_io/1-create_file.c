#include"main.h"
#include<fcntl.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int open_byts, byts_write, num = 0;

	if (filename == NULL)
	{
		return (-1);
	}

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

