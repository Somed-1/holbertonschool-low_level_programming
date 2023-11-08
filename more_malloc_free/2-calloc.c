#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void *_calloc(unsigned int nmemb, unsigned int size)
{
void *result;
unsigned char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
{
	return (NULL);
}
result = malloc(size * nmemb);
if (result == NULL)
{
	return (NULL);
}
p = (unsigned char *)result;
for (i = 0; i < (size * nmemb); i++)
{
	p[i] = 0;
}
return (result);
}
