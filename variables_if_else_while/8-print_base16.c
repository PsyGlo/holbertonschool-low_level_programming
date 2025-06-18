#include <stdio.h>

/**
 * main - Prints 0-9 and a-f using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (i = 0; i <= 5; i++)
		putchar(i + 'a');
	putchar('\n');
	return (0);
}

