#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	 int n;

	 srand(time(0));
	 n = rand() - RAND_MAX / 2;

	/* your code goes here */
	if (last_digit > 5)
	{
	printf("last digit of %d is %d and is greater than 5/n", last digit);
	}
	else if (last_digit == 0)
	{
	printf("last digit of %d is %d and is 0/n", last digit);
	}
	else if (last_digit < 6 && 0)
	{
	printf("last digit of %d is %d and is less than 6 and not 0/n", last digit);
	}
	return (0);
}
