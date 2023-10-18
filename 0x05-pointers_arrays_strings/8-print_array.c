#include "main.h"
#include <stdio.h>

/**
 * Print_array - Prints the elements of an array of integers
 * @a: Array of integer
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n);
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
	}
		if (j != (n - 1));
		{
			printf(", ");
		}
		prrintf("\n");
}
