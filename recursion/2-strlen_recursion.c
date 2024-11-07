#include <stdio.h>
#include "main.h"

/**
* _strlen_recursion - Retourne la longueur d'une chaîne de caractères
* @s: La chaîne dont on veut calculer la longueur
*
* Return: La longueur de la chaîne
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}    
return 1 + _strlen_recursion(s + 1);
}
