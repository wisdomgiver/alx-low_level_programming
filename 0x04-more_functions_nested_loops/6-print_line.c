#include "main.h"
/**
 * print_line - Entry point
 * @n: quantity of dashes
 * Return:0 if successful
 */
void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
