#include "main.h"

/**
 * rev_string - reverse string.
 *
 * @c: the string to be reversed.
 */

void rev_string(char *c)
{
	int length, j, i;
	char v1, v2;

	for (length = 0; c[length] != '\0'; length++)
	{
	}

	j = length - 1;
	i = 0;

	while (j > i)
	{
		v1 = c[i];
		v2 = c[j];
		c[i] = v2;
		c[j] = v1;
		j--;
		i++;
	}
}
