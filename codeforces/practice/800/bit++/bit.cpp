/**
 * LINK: https://codeforces.com/contest/282/problem/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;
    string s;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s == "++X" || s == "X++")
            cnt++;
        else
            cnt--;
    }

    cout << cnt << '\n';

    return 0;
}