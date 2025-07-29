/**
 *
 */
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int p[n];

    int highest = 1;
    int highestIdx = 0;
    int highestNumOccurances = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);

        if (p[i] >= highest)
        {
            highest = p[i];
            highestIdx = i;
            highestNumOccurances++;
        }
    }

    if (p[0] < p[highestIdx])
    {
        int ans = (p[highestIdx] + 1) - p[0];
        printf("%d\n", ans);
    }
    else if (highestNumOccurances > 1)
    {

        printf("1\n");
    }
    else if (highestNumOccurances == 1)
    {

        printf("0\n");
    }

    return 0;
}