#include <bits/stdc++.h>
using namespace std;

int main()
{

    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n; // 4 7 3 5

        vector<int> s(n), a;

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        a = s;

        sort(a.begin(), a.end()); // 3 4 5 7

        int max = a[n - 1];
        int second_max = a[n - 2];

        for (int i = 0; i < n; i++)
        {
            if (s[i] == max)
            {
                cout << s[i] - second_max << " ";
            }
            else
            {
                cout << s[i] - max << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}