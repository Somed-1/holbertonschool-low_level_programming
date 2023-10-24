#include "main.h"
/**
 * *string_toupper - print an array of integers
 * @str: an array of integers
 *
 * Return: str.
 */
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}
return (str);
}
