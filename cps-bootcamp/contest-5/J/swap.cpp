#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[105];

    scanf("%s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i += 2)
    {
        char temp = s[i];
        s[i] = s[i + 1];
        s[i + 1] = temp;
    }

    printf("%s", s);

    return 0;
}