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
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                printf("YES\n");
                break;
            }
            else if (i == n - 1 && a[i] != k)
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}