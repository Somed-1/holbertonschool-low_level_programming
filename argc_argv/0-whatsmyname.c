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
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
