#include "main.h"
#include <stdio.h>

/**
 * _calloc - Alloue de la mémoire pour un tableau et l'initialise à zéro
 * @nmemb: Nombre d'éléments du tableau
 * @size: Taille en octets de chaque élément
 *
 * Return: Pointeur vers la mémoire allouée, ou NULL si échec
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size;
unsigned char *byte_ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);
byte_ptr = (unsigned char *)ptr;
for (i = 0; i < total_size; i++)
byte_ptr[i] = 0;

return (ptr);
}
