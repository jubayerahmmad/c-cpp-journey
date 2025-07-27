/**
 *
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

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int a[n];
            scanf("%d", &a[i]);

            if (a[i] % 2 != 0)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}