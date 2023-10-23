#include "main.h"

/**
 * stringLength - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
int stringLength(char *s)
{
int length = 0;
while (s[length] != '\0')
{
	length++;
}
return (length);
}

/**
 * rev_string - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
char temp;
int length = stringLength(s);
int start = 0;
int end = length - 1;
while (start < end)
{
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;
	start++;
	end--;
}
}
