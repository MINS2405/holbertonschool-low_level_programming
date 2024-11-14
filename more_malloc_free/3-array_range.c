#include "main.h"
#include <stdio.h>

/**
 * array_range - Crée un tableau d'entiers
 * @min: Valeur minimale (incluse)
 * @max: Valeur maximale (incluse)
 *
 * Return: Pointeur vers le nouveau tableau, ou NULL si échec
 */

int *array_range(int min, int max)
{
int *arr;
int size, i;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min + i;
return (arr);
}
