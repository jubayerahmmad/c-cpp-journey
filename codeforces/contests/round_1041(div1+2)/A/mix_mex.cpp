#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[4])
{

    int max = arr[0];

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[4])
{

    int min = arr[0];

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int getMex(int arr[3])
{
    sort(arr, arr + 3);

    for (int i = 0; i <= 3; i++)
    {
        bool found = false;
        for (int j = 0; j < 3; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
            return i;
    }

    return 4;
}

// int getMex(int arr[4])
// {

//     bool exists[4] = {false};

//     for (int i = 0; i < 3; i++)
//     {
//         if (arr[i] >= 0 && arr[i] <= 3)
//         {
//             exists[arr[i]] = true;
//         }
//     }

//     for (int i = 0; i <= 3; i++)
//     {
//         if (!exists[i])
//             return i;
//     }

//     return 4;
// }

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[n + 2]; // -1 -1 -1

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        bool possible = false;

        for (int x = 0; x <= 100; x++)
        {
            int b[n]; // 0 0 0
            for (int i = 0; i < n; i++)
            {
                if (a[i] == -1)
                    b[i] = x;
                else
                    b[i] = a[i];
            }

            int flag = 1;
            int tmp[4]; // 0 0 0

            for (int i = 0; i < n - 2; i++)
            {
                tmp[0] = b[i];
                tmp[1] = b[i + 1];
                tmp[2] = b[i + 2];

                int mex_num = getMex(tmp);
                int max_num = getMax(tmp);
                int min_num = getMin(tmp);

                if (max_num - min_num != mex_num)
                {
                    flag = 0;
                    break;
                }
            }

            if (flag)
            {
                possible = true;
                break;
            }
        }

        if (possible)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}