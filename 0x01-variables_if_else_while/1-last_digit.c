#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n;

	        srand(tim(0));
		n = rand() - RAND_MAX / 2;

		last_digit = n % 10;
		
		printf("last digit of %d is %d", n, last_digit);

		if (last_digit > 5)
		{
			puts(" and is greater than 5");
		}
		else if (last_digit == 0)
		{
			puts(" and is 0");
		}
		else
		{
			puts(" and is less than 6 and not 0");
		}
		
		return (0);
}
