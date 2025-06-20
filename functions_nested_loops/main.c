#include "main.h"
#include <stdio.h>

int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n); /* Should print: 98 */

    n = add(-5, 15);
    printf("%d\n", n); /* Should print: 10 */

    n = add(0, 0);
    printf("%d\n", n); /* Should print: 0 */

    return (0);
}

