#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*
 * main - function
 *
 * @argc: int
 * @argv: hello
 *
 * Retrun: okay
 *
 */
int main(int argc, char *argv[])
{
int i;
int cents[5] = {25, 10, 5, 2, 1};
int count = 0;
int number;

if (argc <= 1)
{
printf("Error\n");
return 1;
}

if (isdigit(*argv[1]) || (argv[1][0] == '-' && isdigit(argv[1][1])))
{
number = atoi(argv[1]);
}
else
{
printf("Error\n");
return 1;
}

if (number < 0)
{
printf("0\n");
return 0;
}

for (i = 0; i < 5; i++)
{
while (number - cents[i] >= 0)
{
number -= cents[i];
count++;
}
if (number == 0) {
break;
}
}

printf("%d\n", count);
return count;
}

