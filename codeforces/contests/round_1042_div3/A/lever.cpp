/**
 * NOT SOLVED YET
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int n;
        scanf("%d", &n);

        int a[n + 2], b[n + 2];

        // 1 1 4 5 1 4
        // 1 9 1 9 8 1

        // 7 3
        // 5 6

        // 10
        // 1
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }

        int count = 0;
        int ignored = 0;

        while (ignored != 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] > b[i])
                {
                    a[i]--;
                }
                else if (!(a[i] > b[i]) && i == n - 1)
                {
                    ignored = 1;
                }
                else if (a[i] < b[i])
                {
                    a[i]++;
                }
            }
            count++;
        }

        printf("COUNTS-->%d\n", count);
    }

    return 0;
}