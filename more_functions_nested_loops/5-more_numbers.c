#include "main.h"

/**
 * more_numbers - prints 10 x the numbers from 0 to 14, followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int line, num;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('0' + num / 10);
			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}

