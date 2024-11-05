#include "main.h"
#include <stdio.h>

/**
 * _memset - Fills memory with a constant byte
 * @n : Number of bytes to be filled
 * @s : Pointer to the memory area to be filled
 * @b : The constant byte to fill the memory with
 * 
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return s;
}
