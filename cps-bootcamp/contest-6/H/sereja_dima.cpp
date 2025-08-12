#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = n - 1, k = 1;

    int sereja = 0, dima = 0;

    while (i <= j)
    {
        if (k % 2 == 1)
        {
            if (a[i] > a[j])
            {
                sereja += a[i];
                i++;
            }
            else
            {
                sereja += a[j];
                j--;
            }
        }
        else
        {
            if (a[i] > a[j])
            {
                dima += a[i];
                i++;
            }
            else
            {
                dima += a[j];
                j--;
            }
        }
        k++;
    }
    cout << sereja << " " << dima << '\n';

    return 0;
}