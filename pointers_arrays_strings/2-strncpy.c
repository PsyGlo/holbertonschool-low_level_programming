#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy src to dest, up to n bytes or until src ends */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If we copied less than n bytes, fill the rest with nulls */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

