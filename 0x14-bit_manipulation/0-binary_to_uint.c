#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is the ponter to char string of 0 and 1 chars
 *
 * Return: 0 if b is NULL or contains chars that are not '0' or '1',
 *         Otherwise, return the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, bin;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (bin = 1, result = 0, i--; i >= 0; i--, bin *= 2)
	{
		if (b[i] == '1')
		{
			result += bin;
		}
	}

	return (result);
}

