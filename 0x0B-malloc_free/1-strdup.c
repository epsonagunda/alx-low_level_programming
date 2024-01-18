#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* _strdup - string duplicate
* @str: string
* Return: NULL if str = NULL
*/
char *_strdup(char *str)
{
char *epson;
int a, b = 0;
if (str == NULL)
return (NULL);
a = 0;
while (str[a] != '\0')
a++;
epson = malloc(sizeof(char) * (a + 1));
if (epson == NULL)
return (NULL);
for (b = 0; str[b]; b++)
epson[b] = str[b];
return (epson);
}

