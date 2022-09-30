#include "main.h"

/**
 * _isalpha - returns 1 if char is lowercase or uppercase
 *
 * @c: character to be checked if lower case/uppercase, type int
 *
 * Return: 1 if lower case/upper case, 0 otherwise
 **/

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
return (1);
else
return (0);
}
