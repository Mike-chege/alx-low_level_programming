#include"main.h"
#include<unistd.h>

/**
 * _putchar - writes a character to standard output.
 * @c: is the character to be printed.
 *
 * Return: 1 on success, on error return -1 and set errno appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

