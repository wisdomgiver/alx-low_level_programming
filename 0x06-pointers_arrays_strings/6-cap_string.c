#include "main.h"

/**
 * is_alpha - Checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: true if c is an alphabetic character, false otherwise
 */
int is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * capitalize - Capitalizes the first letter of every word in a string
 * @c: The string to capitalize
 *
 * Description: Words are delimited by spaces, tabs, or newlines.
 * Return:0 if successful
 */
char capitalize(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	return (c);
}

/**
 * is_special_char - Entry point
 * @c: character
 * Return:0 if successful
 */
int is_special_char(char c)
{
	int i;
	int num_special_chars = 9;
	char special_chars[] = ",;.!?(){}";

	for (i = 0; i < num_special_chars; i++)
	{
		if (c == special_chars[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - Entry point
 * @str: string of characters
 * Return:0 if successful
 */
char *cap_string(char *str)
{
	char *original = str;
	int i;
	int new_word = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (new_word && is_alpha(str[i]))
		{
			str[i] = capitalize(str[i]);
			new_word = 0;
		}
		else if (is_special_char(str[i]))
		{
			new_word = 1;
		}
		else if (str[i] == ' ')
		{
			new_word = 1;
		}
		else
		{
			new_word = 0;
		}
	}
	return (original);
}
