#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[4];
    scanf("%s", s);

    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'c' || s[i] == 'a' || s[i] == 't')
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
