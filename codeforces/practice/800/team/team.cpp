#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][3];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    int result = 0;

    for (int i = 0; i < n; i++)
    {

        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j])
            {
                count++;
            }
        }
        if (count >= 2)
        {
            result++;
        }
    }
    printf("%d\n", result);

    return 0;
}