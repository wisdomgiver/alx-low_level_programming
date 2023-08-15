#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	int i, count;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (count = 1; count <= 10; count++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');

}
