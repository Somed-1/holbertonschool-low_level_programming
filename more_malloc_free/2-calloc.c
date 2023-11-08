#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void *_calloc(unsigned int nmemb, unsigned int size)
{
void *result;
if (nmemb == 0 || size == 0)
{
	return (NULL);
}
result = malloc(size * nmemb);
if (result == NULL)
{
	return (NULL);
}
return (result);
}
