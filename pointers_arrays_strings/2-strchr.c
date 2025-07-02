#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to find
 *
 * Description: This function returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the character is not found.
 *
 * Return: pointer to first occurrence of `c` in `s`, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/* Check for terminating null byte if 'c' is '\0' */
	if (c == '\0')
		return (s);
	return (NULL);
}
