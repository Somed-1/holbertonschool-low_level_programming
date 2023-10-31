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
argc--;
for (; argc > 1; argc--)
{
	printf("%s", argv[argc]);
}
return (0);
}
