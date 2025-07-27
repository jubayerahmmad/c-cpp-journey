/**
 *
 */
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int s[7];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &s[j]);
            sum += s[j];
        }

        printf("%d ", sum);
        sum = 0;
    }

    printf("\n");

    return 0;
}