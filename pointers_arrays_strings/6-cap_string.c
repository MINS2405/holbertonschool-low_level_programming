#include "main.h"
#include <stdio.h>

/**
 * cap_string - Met en majuscule la première lettre de chaque mot d'une chane
 * @str: La chaîne à modifier
 * Return: Un pointeur vers la chaîne modifi�
 */

char *cap_string(char *str);
int is_separator(char c);
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
