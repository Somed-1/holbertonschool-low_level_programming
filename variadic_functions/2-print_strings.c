#include "variadic_functions.h"
#include <stdtio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
char *str;

va_start(list, n);

if (separator == NULL)
separator = "";

for (i = 0; i < n; i++)
{
str = va_arg(list, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i < n - 1)
printf("%s", separator);
}
va_end(list);
printf("\n");
}
