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
char *_strdup(char *s1, char *s2)
{
char *result;
result = (char *)malloc(strlen(s1) + strlen(s2) + 1);
if (result == NULL)
{
	return (NULL);
}
strcpy(result, s1);
strcat(result, s2);
return (result);
}
