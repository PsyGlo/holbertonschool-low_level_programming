#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = _abs(98);
    printf("%d\n", r); /* Should print: 98 */

    r = _abs(0);
    printf("%d\n", r); /* Should print: 0 */

    r = _abs(-1);
    printf("%d\n", r); /* Should print: 1 */

    r = _abs(-523);
    printf("%d\n", r); /* Should print: 523 */

    return (0);
}

