#include "main.h"

/**
 * _strspn - Concatenate two strings, limiting the number of characters copied
 *
 * @s: Destination string
 * @accept: Maximum number of characters to copy from src
 *
 * Return: Pointer to the concatenated string
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (accept[j] == '\0')
break;
}
return (count);
}
