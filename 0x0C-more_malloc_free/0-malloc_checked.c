#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - alloctes memory using malloc
 * @b: number of blocks required
 * Description:
 * Return: pointer to allocated memory
 **/

void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

