#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Alloue de la mémoire en utilisant mallo
 * @b: Nombre d'octets à allouer
 *
 * Return: Un pointeur vers la mémoire allouée
 * Termine le processus avec le statut 98 si malloc échoue
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
