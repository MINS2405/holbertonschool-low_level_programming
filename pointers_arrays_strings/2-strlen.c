#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 *
 * Description: This function counts the number of characters in a string
 * until it reaches the null terminator. It uses pointer arithmetic to
 * traverse the string.
 *
 * Return: The length of the string (number of characters)
 */ 

int _strlen(char *s)
{
int i = 0;

while (*s != 0, '\0')
{
i++;
s++;
}
return (i);
}
