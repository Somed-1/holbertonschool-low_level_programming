#include "main.h"
/**
 * set_string - Sets the value of a pointer to a string
 *
 * This function takes two arguments: a pointer to a pointer
 * to a character (i.e., a pointer to a string), and a pointer
 * to a character (i.e., another string). The function sets
 * the value of the pointer to the character to the value of
 * the pointer to the pointer to the character, effectively
 * changing the string that the pointer points to.
 *
 * @s: A pointer to a pointer to a character (i.e., a pointer to a string)
 * @to: A pointer to a character (i.e., another string)
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
*s = to;
}
