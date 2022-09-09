#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabet
 *
 * Description: Prints the alphabet in lower and upper case
 * Can only use putchar
 *
 * Return: 0 for success
*/
int main(void)
{
char i;
putchar("Lower case characters:\n");
for (i = 'a'; i <= 'z'; i++)
putchar("%c ", i);

putchar("\n\nCapital (upper) case characters:\n");
for (i = 'A'; i <= 'Z'; i++)
putchar("%c ", i);

return (0);
}
