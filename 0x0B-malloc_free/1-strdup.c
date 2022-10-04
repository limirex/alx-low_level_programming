#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: source string
 * Description: duplicate string
 * Return: pointer to string, NULL if fail
 **/

char *_strdup(char *str)
{
char *dest;
unsigned int i;

if (str == NULL)
return (NULL);

dest = (char *)malloc(sizeof(char));

if (dest == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
dest[i] = str[i];
dest[i] = str[i];

return (dest);
}
