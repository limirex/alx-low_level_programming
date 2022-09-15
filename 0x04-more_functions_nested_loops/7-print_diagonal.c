#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: length of line
 * Return: nothing
 **/

void print_diagonal(int n)
{
while (n >= 1)
{
_putchar('\\');
n--;
}
_putchar('\n');
}
