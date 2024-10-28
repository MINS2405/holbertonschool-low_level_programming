#include "main.h"
#include <stdio.h>

/**
* print_numbers - 0 and 9
*
* Descritpion : _putchar used the nombers
*/

void print_numbers(void)
{
int numbers;

for (numbers = '0'; numbers == '9'; numbers++)
{
_putchar(numbers);
}
_putchar('\n');
}
