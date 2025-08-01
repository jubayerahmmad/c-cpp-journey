#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int count = 0;

        for (int i = 0; i <= n - 3; i++)
        {
            if (a[i] < a[i + 1] && a[i + 1] < a[i + 2])
            {
                count++;
                i += 2;
            }
        }
        printf("COUNT-->%d\n", count);
    }

    return 0;
}
