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
if (argc < 3)
{
	printf("Error\n");
	return (1);
}
int x;
int y;
x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x * y);

return (0);
}
