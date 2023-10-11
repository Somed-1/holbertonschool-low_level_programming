#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ca = sizeof(char);
int in = sizeof(int);
int loin = sizeof(long int);
int loloin = sizeof(long long int);
int flo = sizeof(float);
printf("Size of a char: %dbyte(s)\n", ca);
printf("Size of an int: %d byte(s)\n", in);
printf("Size of a long int: %d byte(s)\n", loin);
printf("Size of a long long int: %d byte(s)\n", loloin);
printf("Size of a flaot: %d byte(s)\n", flo);
return (0);
}
