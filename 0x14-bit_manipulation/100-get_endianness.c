#include"main.h"

/**
 * get_endianness - checks the endianness.
 * 
 * Return: 0 if big endian or 1 if little endian.
 */
int get_endianness(void)
{
	int number = 1;
	char *ptr = (char *)&number;

	if (ptr == 1)
		return (1);
	else
		return (0);
}

