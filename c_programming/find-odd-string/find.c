/**
 *
 */
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][4];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][1] - arr[i][0] != arr[i][2] - arr[i][1])
        {
            printf("Odd Strings --> %s\n", arr[i]);
        }
    }

    return 0;
}