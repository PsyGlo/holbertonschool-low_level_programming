#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to print.
 */
void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }

    if (n / 10)
        print_number(n / 10);

    _putchar((n % 10) + '0');
}

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            print_number(n);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            print_number(n);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}

