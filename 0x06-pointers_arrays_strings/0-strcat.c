#include "main.h"

/**
 * *_strcat - Entry point
 * @dest: first pointer
 * @src: second pointer
 * Return: 0 if successful
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
