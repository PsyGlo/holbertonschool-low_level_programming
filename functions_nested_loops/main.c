#include "main.h"
#include <stdio.h>

int main(void)
{
    int r;

    r = _islower('H');
    printf("%d\n", r); /* Should print 0 */

    r = _islower('o');
    printf("%d\n", r); /* Should print 1 */

    r = _islower(108);
    printf("%d\n", r); /* Should print 1 */

    return (0);
}

