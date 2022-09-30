#include "main.h"
/**
 * _isupper - dictates an uppercase
 *
 * @c: character to be checked if uppercase
 *
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
