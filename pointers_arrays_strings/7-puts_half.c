#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, n, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

