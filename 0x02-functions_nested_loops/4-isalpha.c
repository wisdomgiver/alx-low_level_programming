#include "main.h"

/**
 * _isalpha - Entry point
 * @c: character to check
 * Return:1 if successful, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
