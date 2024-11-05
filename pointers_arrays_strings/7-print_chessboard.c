#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Affiche l'échiquier
 * @a: Tableau 2D représentant l'échiquier
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 64; i++)
{
_putchar((*a)[i]);
if ((i + 1) % 8 == 0 && i != 63)
{
_putchar('\n');
}
}
_putchar('\n');
}
