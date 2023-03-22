#include <stdlib.h>
#include "dog.h"

int strglen(char *s);
char *copystring(char *d, char *c);

/**
 * strglen - checks the lenth of string.
 * @s: the string to check.
 * Return: the string length
 */

int strglen(char *s)
{
	int m = 0;/*lenth*/

	while (*s++)
	{
		m++;
	}
	return (m);
}

/**
 * copystring - copy sting c to d
 * @c: to copy from.
 * @d:to copy to.
 * Return: d.
 */

char *copystring(char *d, char *c)
{
	int m = 0;/*the index*/

	for (m = 0; c[m]; m++)
	{
		d[m] = c[m];
	}
	d[m] = '\0';
	return (d);
}

/**
 * new_dog - creates a new dog.
 * @name: the name of the newdog.
 * @age: the age of the newdog..
 * @owner:the owner of the new dog.
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	(*ndog).name = malloc(sizeof(char) * (strglen(name) + 1));
	if ((*ndog).name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (strglen(owner) + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->name = copystring(ndog->name, name);
	ndog->age = age;
	ndog->owner = copystring(ndog->owner, owner);

	return (ndog);
}
