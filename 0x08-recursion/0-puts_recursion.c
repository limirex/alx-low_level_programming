#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string to print
 *
 * Description: print string using recursion
 * Return: nothing
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(s[0]);
_putchar(*s + 1);
}
else
_putchar('\n');
}
