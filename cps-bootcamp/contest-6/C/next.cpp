#include <bits/stdc++.h>
#include <vector>
using namespace std;

// int main()
// {

//     int n, k;
//     scanf("%d%d", &n, &k);

//     int arr[n + 5];

//     int result = 0;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {

//         if (arr[i] >= arr[k - 1] && arr[i] > 0)
//         {
//             result++;
//         }
//     }

//     printf("%d\n", result);

//     return 0;
// }

//* using vector

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> a(n + 5);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int result = 0;

    for (int i = 0; i < n; i++)
    {

        if (a[i] >= a[k - 1] && a[i] > 0)
        {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}