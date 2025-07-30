#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);

        int a[n + 1];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x && a[i] <= y)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
}