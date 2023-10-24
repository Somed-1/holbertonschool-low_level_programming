#include "main.h"
/**
 * _strstr - Concatenate two strings, limiting
 *
 * @haystack: Destination string
 * @needle: Maximum number of characters to copy from src
 *
 * Return: Pointer to the concatenated string
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, k;

for (i = 0; haystack[i] != '\0'; i++)
{
for (k = i, j = 0; needle[j] != '\0'; j++, k++)
{
if (needle[j] != haystack[k] || haystack[k] == '\0')
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (0);
}
