#include"main.h"

/**
 * get_endianness - checks the endianness.
 * 
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int number = 1;
	char *endian = (char *)&number;

	if (*endian == 1)
		return (1);

	return (0);
}

