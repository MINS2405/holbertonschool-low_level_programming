#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point of program
 *
 * description: Prints a quote using the puts function
 * Return: always 0 (Success)
 */

void print_alphabet_x10(void)
{
const char *alphabet = "abcdefghijklmnopqrstuvwyz\n";
int num;
for (num = 0; num < 10; num++)
{
const char *current = alphabet;
while (*current)
{_putchar(*current++);
}
}
}
