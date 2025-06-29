#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of size `size`
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = 0; space < size - row; space++)
			_putchar(' ');
		for (hash = 0; hash < row; hash++)
			_putchar('#');
		_putchar('\n');
	}
}

