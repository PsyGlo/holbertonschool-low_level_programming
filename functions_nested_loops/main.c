#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", r); /* Should print: +, 1 */

    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", r); /* Should print: 0, 0 */

    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", r); /* Should print: -, -1 */

    r = print_sign(-523);
    _putchar(',');
    _putchar(' ');
    printf("%d\n", r); /* Should print: -, -1 */

    return (0);
}

