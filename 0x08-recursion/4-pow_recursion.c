#include "main.h"

/**
 * _pow_recursion - calculates the power of given numbers
 * @x: given number
 * @y: power of given number
 *
 * Return: power of the given number
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}

