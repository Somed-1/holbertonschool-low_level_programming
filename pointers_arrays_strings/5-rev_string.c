#include "main.h"

/**
 * stringLength - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
int stringLength(char *s) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
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
int length = stringLength(str);
int start = 0;
int end = length - 1;
while (start < end)
{
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	start++;
	end--;
}
}
