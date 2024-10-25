#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Description: This program prints alphabet followed by a new line
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar ('\n');
}
