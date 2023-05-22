/**
 * _strlen - gets length of string
 * @s: string to check length
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	return (counter);
}

