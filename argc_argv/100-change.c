#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - main function
 * 
 * @argc: idk 
 * @argv: idk
 * Return: something bruh
 */
int main(int argc, char *argv[])
{
int i;
int cents[5] = {25, 10, 5, 2, 1};
int count = 0;
int number = atoi(argv[1]);
if (argc <= 1)
{
	printf("Error\n");
	return (1);
}
if (!isdigit(*argv[1]))
{
	printf("Error\n");
	return (1);
{
	return (0);
}
for (i = 0; i < 5; i++)
{
	while (number - cents[i] >= 0)
	{
		number -= cents[i];
		count++;
	}
	if (number == 0)
	{
		break;
	}
}
printf("%d\n", count);
return (count);
}
