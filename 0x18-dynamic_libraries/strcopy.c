/**
 * _strcpy - copies string from src to dest
 * @dest: pointer to destination of string
 * @src: pointer to source string to copy from
 * Return: temp
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}

