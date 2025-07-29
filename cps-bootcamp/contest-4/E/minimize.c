/**
 * Minimize Abs
 */

#include <stdio.h>

int main()
{

    int n, l, r; // 5 4 7
    scanf("%d %d %d", &n, &l, &r);

    int a[n + 1]; // 3 1 4 9 7

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {

        if (a[i] < l)
        {
            printf("%d ", l);
        }
        else if (a[i] >= l && a[i] <= r)
        {
            printf("%d ", a[i]);
        }
        else if (a[i] > r)
        {
            printf("%d ", r);
        }
    }
    printf("\n");

    return 0;
}