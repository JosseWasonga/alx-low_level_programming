#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 *
 * @c: length of a string.
 *
 * Return: 0.
 */

int _strlen(char *c)
{
	int i = 0;

	while (c[i] != 0)
	{
		i++;
	}

return (i);
}
