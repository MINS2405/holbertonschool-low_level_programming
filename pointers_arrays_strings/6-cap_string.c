#include "main.h"
#include <stdio.h>

/**
 * cap_string - Met en majuscule la première lettre de chaque mot d'une chaîne
 * @str: La chaîne à modifier
 * Return: Un pointeur vers la chaîne modifiée
 */

char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1;

while (str[i] != '\0')
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}

capitalize_next = is_separator (str[i]);
i++;
}
return (str);
}
