#include "main.h"

/**
 * print_numbers - Entry point of the program
 *
 * Return:0 if successful
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
