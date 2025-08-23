#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, int> count;

    char c;
    for (int i = 0; i < 4; i++)
    {
        cin >> c;
        count[c]++;
    }

    if (count.size() == 2)
    {
        auto it1 = count.begin();
        auto it2 = count.begin();
        it2++;

        if (it1->second == 2 && it2->second == 2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}