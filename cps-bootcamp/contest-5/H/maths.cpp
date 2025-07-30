/**
 * Helpful Maths
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[205];
    char temp[205];

    scanf("%s", s);

    for (int i = 0, j = 0; i < strlen(s); i++)
    {
        if (i % 2 == 0)
        {
            temp[j++] = s[i];
        }
    }

    sort(temp, temp + strlen(temp));

    printf("%c", temp[0]);
    for (int i = 1; i < strlen(temp); i++)
    {
        printf("+%c", temp[i]);
    }

    return 0;
}