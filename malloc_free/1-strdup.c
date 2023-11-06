#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 *
 * @str: char string
 *
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
char *result;
int len;
if (str == NULL)
{
	return (NULL);
}
len = strlen(str);
result = malloc(sizeof(char) * len);
strcpy(str, result);
return (result);
}
