#include "dog.h"
#include <stdlib.h>
/**
  *new_dog - function that creates a new dog.
  *@name: struct parameter name
  *@age: age of the dog
  *@owner: owner of the dog
  *Return: NULL if the function fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
int a, b, c;
dog_t *p;

p = malloc(sizeof(dog_t));

if (p == NULL)
{
free(p);
return (NULL);
}
for (a = 0; name[a]; a++)
;
for (b = 0; owner[b]; b++)
;
p->name = malloc(a + 1);
p->owner = malloc(b + 1);

if (p->name == NULL || p->owner == NULL)
{
free(p->name), free(p->owner), free(p);
return (NULL);
}
for (c = 0; c < a; c++)
{
p->name[c] = name[c];
}
p->name[c] = '\0';
for (c = 0; c < b; c++)
{
p->owner[c] = owner[c];
}
p->owner[c] = '\0';
p->age = age;
return (p);
}
