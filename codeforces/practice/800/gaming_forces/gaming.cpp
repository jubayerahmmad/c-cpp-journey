/**
 * Gaming Forces
 */

#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int h[n + 2];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &h[i]);
        }

        int oneCounts = 0;

        for (int i = 0; i < n; i++)
        {
            if (h[i] == 1)
            {
                oneCounts++;
            }
        }

        int ans = n - (oneCounts / 2);

        printf("%d\n", ans);
    }

    return 0;
}