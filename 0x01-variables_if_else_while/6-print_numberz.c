#include <stdio.h>
/**
 * main - prints all single digits of  base 10,
 * followed by a new line, only use putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
