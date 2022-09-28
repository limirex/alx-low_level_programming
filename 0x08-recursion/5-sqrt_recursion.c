#include "main.h"

/**
 * sqr - finds the square root of a number
 * @n: number to be assigned a square
 * @i: test case square root
 *
 * Return: square root of n or -1 if none
 */

int sqr(int n, int i)
{
if (n == i * i)
return (i);

else if (n < i * i)
return (-1);

return (sqr(n, i + 1));
}

/**
 * _sqrt_recursion - finds natural square root of n
 * @n: number to be squared
 *
 * Return: natural square of a number
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (sqr(n, 0));
}

