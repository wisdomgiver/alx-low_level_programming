#include <stdio.h>
/**
 * main - prints all single digits of  base 10,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{

	for (int digit =1; digit <= 10; digit++)
	{
		printf("%d", digit);
	}

	printf("\n");
	return (0);
}
