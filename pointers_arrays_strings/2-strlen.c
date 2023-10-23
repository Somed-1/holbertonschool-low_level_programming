#include "main.h"
/**
 * _strlen - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
	i++;
}
return (i);
}
