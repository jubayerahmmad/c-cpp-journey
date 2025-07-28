/**
 *
 */

#include <stdio.h>

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    char s[n + 1], t[m + 1];

    scanf("%s", s);
    scanf("%s", t);

    int isPrefix = 1;
    int isSuffix = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            isPrefix = 0;
            break;
        }
    }

    for (int i = m - n, j = 0; i < m; i++, j++)
    {
        if (s[j] != t[i])
        {
            isSuffix = 0;
            break;
        }
    }

    if (isPrefix == 1 && isSuffix == 1)
    {
        printf("0\n");
    }
    else if (isPrefix == 0 && isSuffix == 0)
    {
        printf("3\n");
    }
    else if (isPrefix == 1 && isSuffix == 0)
    {
        printf("1\n");
    }
    else if (isPrefix == 0 && isSuffix == 1)
    {
        printf("2\n");
    }

    return 0;
}