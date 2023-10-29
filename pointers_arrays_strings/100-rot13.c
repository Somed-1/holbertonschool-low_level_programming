#include "main.h"
/**
* rot13 - Encodes a string using the rot13 algorithm
*
* This function takes a string as input and applies the rot13
* algorithm to it, which replaces each letter with the letter 13
* positions ahead of it in the alphabet. The function initializes
* two arrays of characters, a and b, which contain the letters of
* the alphabet in order and the corresponding letters 13 positions ahead.
* The function then iterates over the input string, replacing each letter
* with the corresponding letter from b if it is found in a.
* The function returns the modified string.
*
* @str: The string to be encoded
*
* Return: The encoded string
*/
char *rot13(char *str)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; *(str + i); i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == a[j])
{
str[i] = b[j];
break;
}
}
}

return (str);
}
