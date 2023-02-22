#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of year
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
/**
 * is_leap_year - checks if a year is a leap year
 * @year: year to check
 * Return: 1 if leap year, 0 otherwise
 */
int is_leap_year(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		if (month > 2)
			day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
