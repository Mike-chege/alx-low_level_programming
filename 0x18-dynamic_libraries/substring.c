/**
 * _strspn - finds length of prefix substring
 *
 * @s: string to check
 * @accept: substring of chars
 *
 * Return: n bytes in intial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int bytes = 0;
	int temp;

	while (*s)
	{
		i = 0;
		temp = bytes;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				bytes++;
			i++;
		}
		if (temp == bytes)
			break;
		s++;
	}
	return (bytes);
}

