#include "main.h"
#include <stdio.h>

/**
* print_diagonal - draws a straight line in the terminal
* @n: number of times the character _ should be printed
*
* Description: If n is 0 or less, only prints a newline.
*/

void print_diagonal(int n);
{
int i;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
