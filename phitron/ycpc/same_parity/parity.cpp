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

        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if ((a[i] + i) % 2 == 0)
            {
                if (i == n - 1)
                {
                    flag = 1;
                }
            }
            else
            {
                flag = 0;
                break;
            }

            if ((a[i] + i) % 2 == 1)
            {
                if (i == n - 1)
                {
                    flag = 1;
                }
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {

            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
