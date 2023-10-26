#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* This program generates a password by initializing an array of characters called pass and using a while loop to modify its contents.
* The loop continues until the sum variable is greater than or equal to 2772. Inside the loop, half1 and half2 are calculated as half of the
* difference between sum and 2772. If the difference is odd, half1 is incremented by 1.
* Two for loops iterate over the characters in pass, subtracting half1 or half2 from each character if it is greater than or equal to
* 33 plus the respective half value. The loop is broken after the first iteration due to a missing pair of braces. Finally, the printf
* function is called to print the contents of pass, and the main function returns 0.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char pass[84];
int i = 0, sum = 0, half1 = 0, half2 = 0;

srand(time(0));

while (sum < 2772)
{
pass[i] = 33 + rand() % 94;
sum += pass[i++];
}

pass[i] = '\0';

if (sum != 2772)
half1 = (sum - 2772) / 2;
half2 = (sum - 2772) / 2;

if ((sum - 2772) % 2 != 0)
half1++;

for (i = 0; i < pass[i]; i++)
if (pass[i] >= (33 + half1))
{
pass[i] -= half1;
break;
}

for (i = 0; i < pass[i]; i++)
if (pass[i] >= (33 + half2))
{
pass[i] -= half2;
break;
}

printf("%s", pass);

return (0);
}
