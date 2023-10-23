#include "main.h"

/**
 * rev_string - Entry point
 *
 *@s: int
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
    int length = 0;
    char temp;

    if (s == NULL)
        return;

    while (s[length] != '\0')
        length++;

    for (int start = 0, end = length - 1; start < end; start++, end--)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
    }
}

