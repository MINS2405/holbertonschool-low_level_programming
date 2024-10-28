#include "main.h"
#include <stdio.h>

/**
* print_most_numbers - Prints numbers 0 from 9, excluding  2 and 4
*
* Descritpion :  Description: Prints all numbers except 2 and 4, without a new line at the end
*/

void print_most_numbers(void)
{
int numbers;
for (numbers = '0'; numbers <= '9'; numbers++)
{
if (numbers != '2' && numbers != '4')
_putchar(numbers);
}
_putchar('\n');
}
