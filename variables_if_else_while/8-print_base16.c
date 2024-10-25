#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Imprime tous les nombres de base 16 en minuscules, suivis d'un retour à la ligne
 *
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);
}
