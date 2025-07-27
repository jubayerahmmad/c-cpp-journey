/**
 *
 */

#include <stdio.h>
#include <math.h>

int main()
{

    int tc;
    scanf("%d", &tc);

    while (tc--)
    {
        int n;
        scanf("%d", &n);

        int a[n + 1];
        long long total_squares = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            total_squares += a[i];
        }

        long long sqr = sqrt(total_squares * 1.00);

        if (sqr * sqr == total_squares)
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