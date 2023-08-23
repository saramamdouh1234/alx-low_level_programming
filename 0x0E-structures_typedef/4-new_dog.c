#include "dog.h"


/**
*_strlen - returns length of
*a string
*@str: string to be counted
*Return: returns length of string
*/
int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}


/**
*_strcopy - copy string pointed by src
*into dest variable
*@dest:buffer storing string copy
*@src: buffer storing string to copy
*Return:returns copied string
*/
char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}




/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *Poppy;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

Poppy = malloc(sizeof(dog_t));
if (Poppy == NULL)
return (NULL);

Poppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (Poppy->name == NULL)
{
free(Poppy);
return (NULL);
}

Poppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (Poppy->owner == NULL)
{
free(Poppy->name);
free(Poppy);
return (NULL);
}

Poppy->name = _strcopy(Poppy->name, name);
Poppy->age = age;
Poppy->owner = _strcopy(Poppy->owner, owner);

return (Poppy);i
