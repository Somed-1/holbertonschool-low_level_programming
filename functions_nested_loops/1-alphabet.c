#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: void (Success)
 */
void print_alphabet(void)
{
char new;
for (new = 'a'; new <= 'z'; new++)
{
	_putchar(new);
}
_putchar('\n');
}
