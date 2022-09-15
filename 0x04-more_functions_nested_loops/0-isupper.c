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
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
