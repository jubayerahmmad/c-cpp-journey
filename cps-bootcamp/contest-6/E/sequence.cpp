#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n + 1); // 2 4 1 4 2

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int freq[n + 1];

    for (int i = 1; i <= n; i++)
    {
        freq[i] = 0;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > n)
        {
            count++;
        }
        else
        {
            freq[arr[i]]++;
        }
    }

    for (int i = 1; i <= n; i++)
    {

        if (freq[i] > i)
        {
            count += freq[i] - i;
        }
        else if (freq[i] < i)
        {
            count += freq[i];
        }
    }

    cout << count << endl;

    return 0;
}