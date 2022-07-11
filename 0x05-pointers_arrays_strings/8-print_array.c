#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array.
 * @a: the array to print.
 * @l: array's length.
 */

void print_array(int *a, int l)
{
	int i;

	for (i = 0; i < l; i++)
	{
		printf("%d", a[i]);
		if (i < l - 1)
		{
			printf(",");
		}
	}
	printf("\n");
}
