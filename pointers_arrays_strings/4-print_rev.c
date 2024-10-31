#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
int i = 0;
int a;

while (s[i] != '\0')
{
i++;
}
a = i;

for (i = a - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
