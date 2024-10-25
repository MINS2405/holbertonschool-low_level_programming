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
	char alphabt;

	while (alphabt <= 'Z')
	{
	if (alphabt <= 'a' alphabt <= 'z')
	putchar(alphabt);
	alphabt++;
	}
	putchar('\n');

	return (0);
}
