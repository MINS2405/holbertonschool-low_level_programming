#include "main.h"
#include <stdio.h>

/**
* more_numbers - Prints numbers from 0 to 14, ten times
*
* Description: This function prints the numbers 0 to 14,
* followed by a new line. It repeats this process 10 times.
* It uses _putchar to print each digit.
*
* Return: void
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
