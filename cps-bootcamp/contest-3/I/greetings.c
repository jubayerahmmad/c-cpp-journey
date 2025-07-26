/**
 *
 */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int res = a + b;
        printf("Case %d: %d\n", i, res);
    }

    return 0;
}