/**
 *
 */

#include <stdio.h>

int main()
{

    int n, x, res = 0;

    scanf("%d %d", &n, &x);

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    // printf("N: %d, X: %d\n", n, x);
    // printf("Scores: ");

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", scores[i]);
    // }

    for (int i = 0; i < n; i++)
    {
        if (scores[i] <= x)

        {
            res += scores[i];
        }
    }

    printf("%d\n", res);

    return 0;
}