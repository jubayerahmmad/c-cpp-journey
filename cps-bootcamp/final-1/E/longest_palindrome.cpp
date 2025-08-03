#include <bits/stdc++.h>
using namespace std;

char s[123];

bool checkPal(int l, int r)
{
    while (l < r)
    {
        if (s[l] != s[r])
            return 0;
        l++, r--;
    }
    return 1;
}

int main()
{

    scanf("%s", s);

    int n = strlen(s);

    int ans = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (checkPal(i, j))
                ans = max(ans, j - i + 1);
        }
    }

    printf("%d\n", ans);

    return 0;
}