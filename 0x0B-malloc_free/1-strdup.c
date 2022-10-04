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
unsigned int i, len;

if (str == NULL)
return (NULL);

for (i = 0; str[i]; i++)
len++;
dest = malloc(sizeof(char) * (len + 1));

if (dest == NULL)
return (NULL);

for (i = 0; str[i]; i++)
{
dest[i] = str[i];
}

dest[len] = '\0';
return (dest);
}
