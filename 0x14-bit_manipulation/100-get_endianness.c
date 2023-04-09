#include"main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int number;
	char *endian;

	i = 1;
	endian = (char *)&number;
	if (endian)
		return (1);
	else
		return (0);
}
