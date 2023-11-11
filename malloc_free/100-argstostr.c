#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * argstostr - function that contaconatse all arguments
 *
 * @ac: integer
 * @av: array of pointers to strings
 *
 * Return: A new string
 */
char *argstostr(int ac, char **av)
{
char *result;
int total_len, i;
int pos;
if (ac == 0 || ab == NULL)
{
	return (NULL);
}
total_len += ac;
for (i = 0; i < ac; i++)
{
	total_len += strlen(av[i]);
}
result = malloc(sizeof(char) * (total_len + 1));
if (result == NULL)
{
	return (NULL);
}
pos = 0;
for (i = 0; i < ac; i++)
{
	strcpy(result + pos, av[i]);
	pos += strlen(av[i]);
	result[pos] = '\n';
	pos++;
}
result[pos] = '\0';

return (result);
}
