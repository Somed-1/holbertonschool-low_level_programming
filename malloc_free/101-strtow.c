#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * words_count - counts words using spaces
 *
 * @str: string
 *
 * Return: count of words
 */
int words_count(char *str)
{
int count;
count = 0;
while (*str)
{
	if (*str != ' ')
	{
		count += 1;
		while (*str != ' ' && *str != '\0')
		{
			str++;
		}
	}
	else
	{
		str++;
	}
}
return (count);
}

/**
 * copy - copy the string
 *
 * @str: string
 * @len: len
 *
 * Return: string
 */
char *copy(char *str, int len)
{
char *new;
int i;
i = 0;
new = malloc(sizeof(char) * (len + 1));
while (i < len)
{
	*(new + i) = *str;
	i++;
	str++;
}
*(new + i) = '\0';
return (new);
}
/**
 * strtow - separates words from given string
 *
 * @str: string
 *
 * Return: new array with separated words
 */
char **strtow(char *str)
{
char **result;
char *start;
int count;
int len, temp_len, i, j;
len = strlen(str);
if (str == NULL || len == 0)
	return (NULL);
count = words_count(str);
result = malloc(sizeof(char *) * (count + 1));
if (result == NULL)
	return (NULL);
i = 0;
while (*(str + j))
{
	if (*(str + j) != ' ')
	{
		temp_len = 0;
		start = (str + j);
		while (*(str + j) != ' ' && *(str + j) != '\0')
		{
			j++;
			temp_len += 1;
		}
		result[i] = copy(start, temp_len);
		i++;
	}
	else
	{
		j++;
	}
}
result[i] = NULL;
return (result);
}

