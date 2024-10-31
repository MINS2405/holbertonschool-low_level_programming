#include "main.h"
#include <stdio.h>

/**
 * Function: print_rev
 * Prototype: void print_rev(char *s)
 *
 * Description: This function prints a given string in reverse order,
 * followed by a new line. It takes a single parameter
 *
 * Return: always
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
