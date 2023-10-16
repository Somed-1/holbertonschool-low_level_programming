#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
