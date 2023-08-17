#include "main.h"
/**
 * _isdigit - Entry point
 * @c:character to be the checked
 * Return: 1 if c is a digit otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
