#include <unistd.h>

/**
 * main - Imprime les chiffres de 0 à 9 suivis d'un retour à la ligne
 *
 * Return: Toujours 0 (Succès)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
