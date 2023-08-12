#include <stdio.h>
/**
 * main - prints all single digits of  base 10,
 * followed by a new line, only use putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{

	int digit;

	for (digit = 0; digit <= 10; digit++)
	{
		putchar(digit);
	}

	putchar('\n');
	return (0);
}
