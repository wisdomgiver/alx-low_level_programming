#include "main.h"

void reverse_array(int *a, int n)
{
	int i = 0, temp; 
	int j; 
	j = n - 1;
	while(i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
	}
}
