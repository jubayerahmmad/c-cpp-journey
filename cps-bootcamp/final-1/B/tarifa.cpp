#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int n;
    scanf("%d", &n);

    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int used = 0;
    for (int i = 0; i < n; i++)
    {
        used += a[i];
    }

    int leftovers = (x * n) - used;

    printf("%d\n", x + leftovers);
    return 0;
}