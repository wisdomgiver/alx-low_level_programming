#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	int count, i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
