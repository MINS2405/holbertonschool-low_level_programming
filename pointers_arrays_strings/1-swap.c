#include "main.h"
#include <stdio.h>

/**
 * user the prototypes: void swap_int to int *a, int *b
 *
 * Description: function that swaps the values of two integers
 *
 */
void swap_int(int *a, int *b)
{
int i;

i = *a;
*a = *b;
*b = i;
}
