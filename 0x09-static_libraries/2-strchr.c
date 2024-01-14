#include "main.h"
/**
 *_strchr - locates the last occurrence of a character in a string
 * @s: pointer to the string where the search is to be performed.
 * @c: character to be searched
 * Return: 0 (pass)
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
;
if (s[i] == c)
return (s + i);
else
return (NULL);
}
