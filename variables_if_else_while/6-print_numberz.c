#include <stdio.h>

/**
 * main - Imprime les chiffres de 0 à 9 suivis d'un retour à la ligne
 *
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 58; i++)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);
}
