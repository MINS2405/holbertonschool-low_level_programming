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
	char lettre = 'a';

	while (lettre <= 'z')
	{
	if (lettre != 'a' && lettre != 'z')
	putchar(lettre);
	lettre++;
	}
	putchar('\n');

	return (0);
}
