#include <unistd.h>

/**
 * main - Imprime chiffre de 0, 9 suivis d'un retour la ligne
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
