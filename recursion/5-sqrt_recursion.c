#include <stdio.h>
#include "main.h"

/**
* _sqrt_helper - Fonction auxiliaire pour calculer la racine carrée
* @n: Le nombre dont on cherche la racine carrée
* @i: La valeur actuelle testée comme racine carrée
*
* Return: La racine carrée naturelle si elle existe, -1 sinon
*/
int _sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_helper(n, i + 1));
}
