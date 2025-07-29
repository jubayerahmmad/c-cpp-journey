/**
 *
 */
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int ab = a + b;
    int bc = c + b;
    int ac = c + a;

    if (ab >= bc && ab >= ac)
    {
        printf("%d\n", ab);
    }
    else if (bc >= ab && bc >= ac)
    {
        printf("%d\n", bc);
    }
    else if (ac >= ab && ac >= bc)
    {
        printf("%d\n", ac);
    }

    return 0;
}