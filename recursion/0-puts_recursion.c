#include <stdio.h>
#include "main.h"

/**
* _puts_recursion - Imprime chaîne suivie d'une nouvelle lignerécursivemen
* @s: La chaîne à imprimer
*/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
