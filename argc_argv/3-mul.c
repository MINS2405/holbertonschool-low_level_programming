#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, 1 if error occurs
 */
int main(int argc, char *argv[])
{
int num1;
int num2;

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

printf("%d\n", num1 *num2);

return (0);
}
