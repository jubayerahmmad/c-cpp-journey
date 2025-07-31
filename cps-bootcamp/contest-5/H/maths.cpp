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
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (i % 2 == 0)
        {
            temp[j++] = s[i];
        }
    }
    temp[j] = '\0';
    sort(temp, temp + j);
    printf("%c", temp[0]);
    for (int i = 1; i < j; i++)
    {
        printf("+%c", temp[i]);
    }
    return 0;
}