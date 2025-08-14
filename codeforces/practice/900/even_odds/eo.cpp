#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> odd;
    vector<int> even;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            odd.push_back(i);
        }
        else
        {
            even.push_back(i);
        }
    }

    odd.insert(odd.end(), even.begin(), even.end());

    cout << odd[k - 1] << '\n';

    return 0;
}