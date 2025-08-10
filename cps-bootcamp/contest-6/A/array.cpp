#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    scanf("%d", &n);

    int a[n + 2];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int rev[n + 2];

    for (int i = n - 1, j = 0; i >= 0, j < n; i--, j++)
    {
        rev[j] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", rev[i]);
    }
    printf("\n");

    return 0;
}