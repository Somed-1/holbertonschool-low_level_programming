#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - Entry point
 *
 * @s1: int
 * @s2: int
 * @n: int
 *
 * Return: Always 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int s1_len = strlen(s1);
unsigned int s2_len = strlen(s2);
unsigned int i;
if (n >= s2_len)
{
	n = s2_len;
}
result = malloc(sizeof(char) * (s1_len + n));
if (result == NULL)
{
	return (NULL);
}
strcpy(result, s1);
for (i = s1_len; i < n; i++)
{
	result[i] = *s2;
	s2++;
}
return (result);
}
