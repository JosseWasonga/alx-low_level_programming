#include "main.h"

/**
 * *_memset - main function.
 * @s: Pointer to the buffer.
 * @b: The constant byte.
 * @n: Size of buffer to fill.
 *
 * Description: This function fills memory with a constant byte.
 *
 * Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int i)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
