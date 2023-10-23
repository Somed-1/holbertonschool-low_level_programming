#include "main.h"
/**
 * _strcpy - Entry point
 *
 * @dest: char
 * @src: char
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;
while (1)
{
	dest[i] = src[i];
	if (src[i] == '\0')
	{
		return (dest);
	}
	i++;
}
}
