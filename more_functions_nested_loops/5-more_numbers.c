#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - Prints numbers 0 from 14
*
* Descritpion : user _putchar three times the code
* Return : void
*/

void more_numbers(void)
{
int numbers, lecerveaudemina;
for (lecerveaudemina = 0; lecerveaudemina <= 9; lecerveaudemina++)
{
for (numbers = 0; numbers <= 14; numbers++)
{
if (numbers >= 10)
{
_putchar((numbers / 10) + '0');
}
_putchar((numbers % 10) + '0');
}
_putchar('\n');
}
}
