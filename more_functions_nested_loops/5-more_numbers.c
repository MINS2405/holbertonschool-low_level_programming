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
int numbers;
for (numbers = '0'; numbers <= '14'; numbers++)

_putchar(numbers++);
_putchar(numbers);

_putchar('\n');
}
