#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function takes two integer pointers and swaps
 * the values they point to.
 */
void swap_int(int *a, int *b)
{
int i;

i = *a;
*a = *b;
*b = i;
}
