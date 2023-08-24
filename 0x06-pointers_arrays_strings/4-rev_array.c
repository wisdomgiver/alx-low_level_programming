#include "main.h"

/**
 * reverse_array - Entry point
 * @a: array of strings
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
