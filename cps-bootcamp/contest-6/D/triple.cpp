#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> arr(n + 1); // 2 2 3 3 4 2 2

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> freq(n + 1);

        for (int i = 0; i < n; i++)
        {
            freq[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        int ans = -1;

        for (int i = 1; i <= n; i++)
        {
            if (freq[i] >= 3)
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}