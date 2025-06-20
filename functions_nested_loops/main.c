#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = print_last_digit(98);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", r); /* Should print: 8, 8 */

    r = print_last_digit(0);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", r); /* Should print: 0, 0 */

    r = print_last_digit(-1024);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", r); /* Should print: 4, 4 */

    return (0);
}

