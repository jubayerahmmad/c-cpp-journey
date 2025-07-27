/**
 * C - Cut
 */

#include <stdio.h>

int main()
{

    int n, k;
    scanf("%d %d", &n, &k);

    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = n - k; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < n - k; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}