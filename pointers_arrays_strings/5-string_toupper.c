#include "main.h"
#include <stdio.h>

/**
* string_toupper - Change toutes les lettres minuscules une chaîne en majuscle
* @str: La chaîne à modier
*
* Return: Un pointeur vers la chaîne modifer
*/

char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
