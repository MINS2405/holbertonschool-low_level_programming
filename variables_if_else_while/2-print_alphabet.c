#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char alphabet;

	for (alphabet = 'a'; <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
