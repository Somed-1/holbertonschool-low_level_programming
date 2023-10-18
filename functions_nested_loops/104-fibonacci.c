#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

/**
 * strsum - returns sum of 2 string numbers
 *
 * @a: int
 * @b: int
 * @result: char
 *
 * Return: result
 **/
void strsum(const char *a, const char *b, char *result)
{
int ai;
int bi;
int carry;
int i;
int num1;
int num2;
int sum;
int j;
int temp;

ai = strlen(a);
bi = strlen(b);
carry = 0;
i = 0;
while (ai > 0 || bi > 0 || carry > 0)
{
num1 = (ai > 0) ? (a[--ai] - '0') : 0;
num2 = (bi > 0) ? (b[--bi] - '0') : 0;

sum = num1 + num2 + carry;
result[i++] = (sum % 10) + '0';
carry = sum / 10;
}

result[i] = '\0';

j = 0;
i--;
while (j < i)
{
temp = result[j];
result[j] = result[i];
result[i] = temp;
j++;
i--;
}
}

/**
 * fibonacci - returns sum of 2 string numbers
 *
 * @n: int
 *
 * Return: result
 **/
void fibonacci(int n)
{
char a[MAX_DIGITS] = "1";
char b[MAX_DIGITS] = "2";
char temp[MAX_DIGITS];
int i;

printf("1, 2, ");
for (i = 3; i <= n; i++)
{
strsum(a, b, temp);
strcpy(a, b);
strcpy(b, temp);
printf("%s", b);

if (i < n)
{
printf(", ");
}
}
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
fibonacci(98);
printf("\n");
return (0);
}
