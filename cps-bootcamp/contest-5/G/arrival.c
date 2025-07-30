/**
 *  Arrival of The General
 */

#include <stdio.h>

int n;        // 4
int arr[105]; // 33 44 11 22

int max_index()
{
    int max_idx = 0; // 1
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[max_idx])
            max_idx = i;
    }
    return max_idx;
}

int min_index()
{
    int min_idx = 0; // 2
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[min_idx])
            min_idx = i;
    }
    return min_idx;
}

int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max_idx = max_index(); // 1
    int min_idx = min_index(); // 2

    int result = max_idx + (n - min_idx - 1); // 2

    if (max_idx > min_idx)
        result--;

    printf("%d\n", result);

    return 0;
}