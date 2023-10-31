#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints characters from the first command-line argument.
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
if (argc < 2)
{
	printf("Error\n");
	return (1);
}
int result = argv[1] * argv[2];
printf("%d\n", result);
return (0);
}
