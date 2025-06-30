#include "main.h"

/* _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte to fill with
 * @n :number of bytes to fill
 *  Return: pointer to memory area s */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* Loop through n bytes */

	for (i = 0; i < n; i++)
	{
		/* Set each byte to b */
		s[i] = b;
	}

	/* Return original pointer */
	return (s);
}
