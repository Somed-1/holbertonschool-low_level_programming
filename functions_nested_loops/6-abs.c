#include "main.h"
/**
 * _abs - returns 1 if char is lowercase
 *
 * @num: character to be checked if grater than zero etc, type int
 *
 * Return: 1 and prints + if > 0, 0 otherwise
 **/
int _abs(int num)
{
if (num < 0)
{
	return (-num);
}
else
{
	return (num);
}
}
