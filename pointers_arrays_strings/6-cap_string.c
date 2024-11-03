#include "main.h"
#include <stdio.h>

/**
 * is_separator - Vérifie si un caractère est un séparateur de mots
 * @c: Le caractère à vérifier
 * Return: 1 si c'est un séparateur, 0 sinon
 */

int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (1);
}
return (0);
}
