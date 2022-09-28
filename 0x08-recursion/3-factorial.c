#include "main.h"

/**
 * factorial - gets the factorial of a given number
 * @n: number given
 *
 * Return: factorial of n
 */

int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
{
return (1);
}
else
{
n = (n *factorial(n - 1));
return (n);
}
}
