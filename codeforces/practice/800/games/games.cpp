/**
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int h[n + 1], a[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &h[i], &a[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (h[i] == a[j])
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}