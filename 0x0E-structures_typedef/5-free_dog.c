#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - ...
  * @d: ...
  *
  * Return: viod
  */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		if (d->owner)
			free(d->owner);
		if (d->name)
			free(d->name);
		free(d);
	}
}
