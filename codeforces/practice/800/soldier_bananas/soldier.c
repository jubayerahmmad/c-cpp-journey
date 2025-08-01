/**
 *
 */

#include <stdio.h>

int main()
{
    int k, n, w;

    scanf("%d%d%d", &k, &n, &w);

    int totalCost = 0;

    for (int i = 1; i <= w; i++)
    {
        totalCost += i * k;
    }

    if (totalCost <= n)
    {
        printf("0\n");
    }
    else
        printf("%d\n", totalCost - n);

    return 0;
}