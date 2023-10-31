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
if (argc == 1)
{
	printf("0\n");
	return (1);
}
int i;
int sum;
sum = 0;
for (i = 1; i < argc; i++)
{
	char *endptr;
	long num = strtol(argv[i],)
}
return (0);
}
