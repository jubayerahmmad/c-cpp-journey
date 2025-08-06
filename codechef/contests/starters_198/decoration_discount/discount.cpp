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

        int a[n + 2];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int min_value = 102;
        int second_min_value = 102;

        for (int i = 0; i < n; i++)
        {

            if (a[i] < min_value)
            {
                second_min_value = min_value;
                min_value = a[i];
            }
            else if (a[i] < second_min_value)
            {
                second_min_value = a[i];
            }
        }

        int min_cost = min_value + second_min_value;

        for (int i = 0; i < n - 1; i++)
        {

            if (a[i] + (a[i + 1] / 2) <= min_cost)
            {
                min_cost = a[i] + (a[i + 1] / 2);
            }
        }

        printf("%d\n", min_cost);
    }

    return 0;
}
