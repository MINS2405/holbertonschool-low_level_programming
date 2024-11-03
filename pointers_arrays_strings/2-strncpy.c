#include "main.h"
#include <stdio.h>


/**
 * _strncpy - Copie jusqu'à n caractères de la chaîne src vers dest
 * @dest: La chaîne de destination
 * @src: La chaîne source
 * @n: Le nombre maximum de caractères à copier
 *
 * Return: Un pointeur vers la chaîne résultante dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
