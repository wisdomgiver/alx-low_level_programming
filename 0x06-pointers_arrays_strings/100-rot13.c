#include "main.h"

/**
 * rot13 - Entry point
 * @s: character set
 * Return; 0 if successful
 */
char *rot13(char *s)
{
	int i = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if ((c > 'M' && c <= 'Z') || (c > 'm' && c <= 'z'))
			{
				s[i] = c - 13;
			}
			else
			{
				s[i] = c + 13;
			}
		}
	}
	return (s);
}
