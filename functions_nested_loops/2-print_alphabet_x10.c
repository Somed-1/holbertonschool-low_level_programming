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

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void (Success)
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
	print_alphabet();
}
}
