#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy characters from src to dest */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Add null terminator */
	dest[i] = '\0';

	return (dest);
}

