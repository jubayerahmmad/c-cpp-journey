/**
 *
 */

#include <stdio.h>

int main()
{

    int n, k, m;

    scanf("%d %d %d", &n, &k, &m);

    int achieve = 0;

    int marks = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int a[n];
        scanf("%d", &a[i]);

        marks += a[i];
    }

    int totalToAchieve = n * m;

    if (marks < totalToAchieve)
    {
        achieve = totalToAchieve - marks;
    }

    if (achieve <= k)
    {
        printf("%d\n", achieve);
    }
    else
    {

        printf("-1\n");
    }

    return 0;
}