#include "main.h"
#include <stdio.h>

/**
 * cap_string - Met en majuscule la première lettre de chaque mot d'une chaî
 * @str: La chaîne à modifi
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
capitalize_next = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}');
i++;
}
return (str);
}
