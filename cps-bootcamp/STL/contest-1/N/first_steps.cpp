#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> array(n); // [2, 2, 1, 3, 4, 1] [2, 2, 3, 4]

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int maXcount = 0;
    int currentCount = 1;

    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && array[i + 1] >= array[i])
        {
            currentCount++;
        }
        else if (i == n - 1 && array[i] >= array[i - 1])
        {
            if (currentCount > maXcount)
            {
                maXcount = currentCount;
            }
            currentCount++;
        }
        else
        {
            if (currentCount > maXcount)
            {
                maXcount = currentCount;
            }
            currentCount = 1;
        }
    }

    cout << maXcount << endl;

    return 0;
}