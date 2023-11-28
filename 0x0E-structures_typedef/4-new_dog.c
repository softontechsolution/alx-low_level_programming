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
*of failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *softo;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

softo = malloc(sizeof(dog_t));
if (softo == NULL)
return (NULL);

softo->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (softo->name == NULL)
{
free(softo);
return (NULL);
}

softo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (softo->owner == NULL)
{
free(softo->name);
free(softo);
return (NULL);
}

softo->name = _strcopy(softo->name, name);
softo->age = age;
softo->owner = _strcopy(softo->owner, owner);

return (softo);
}
