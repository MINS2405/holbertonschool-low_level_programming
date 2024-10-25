#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
	if (lettre != 'a' && lettre != 'z')
	putchar(lettre);
	}
	putchar('\n');

	return (0);
}
