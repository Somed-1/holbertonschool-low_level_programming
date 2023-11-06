#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 *
 * @s1: char string
 * @s2: char strign
 *
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
char *result;
if (s1 == NULL && s2 == NULL)
{
	return (result);
}
result = (char *)malloc(strlen(s1) + strlen(s2) + 1);
if (result == NULL)
{
	return (NULL);
}
strcpy(result, s1);
strcat(result, s2);
return (result);
}
