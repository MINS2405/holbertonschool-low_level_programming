#include "main.h"
#include <stdio.h>

/**
 * is_separator - Vérifie si un caractère est un séparateur de mots
 * @c: Le caractère à vérifier
 * Return: 1 si c'est un séparateur, 0 sinon
 */

int is_separator(char c);
char *cap_string(char *);
{
int i = 0;
int capitalize_next = 1;

while (str[i] != '\0')
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}

capitalize_next = is_separator(str[i]);
i++;
}
return (str);
}
