#include"main.h"
#include<fnctl.h>

/**
 * int append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_byts, write_byts, num = 0; /*declaring variables*/

	if (filename == NULL)
		return (-1);
	
	if (text_content != NULL)
	{
		for (num = 0; text_content[num]; num++)
		{
			/* nothing done here*/
		}
			
	}
	
	open_byts = open(filename, O_WRONLY | O_APPEND);
	if (open_byts == -1)
		return(-1);

	write_byts = write(open_byts, text_content, num);
	if (write_byts == -1)
	{
		close(open_byts);
		return (-1);
	}

	close(open_byts);

	return (1);
}

