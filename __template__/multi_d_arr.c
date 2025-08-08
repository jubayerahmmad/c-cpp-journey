#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n); // number of arrays
    k = 3;           // number of integers per array (change if needed)

    int arr[n][k]; // 2D array: n rows × k columns

    // Input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Output
    for (int i = 0; i < n; i++)
    {
        printf("Array %d --> ", i + 1);
        for (int j = 0; j < k; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
