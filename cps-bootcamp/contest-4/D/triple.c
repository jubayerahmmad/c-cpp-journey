/**
 *
 */

#include <stdio.h>

int main()
{

    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int n;
        scanf("%d", &n);

        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int f[n + 1];
        for (int i = 1; i <= n; i++)
        {
            f[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            f[a[i]]++;
        }

        int ans = -1;
        for (int i = 1; i <= n; i++)
        {
            if (f[i] >= 3)
            {
                ans = i;
                break;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}