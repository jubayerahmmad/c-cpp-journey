#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    scanf("%d", &n);

    int x[n];
 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    sort(x, x + n);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count += (x[i] != x[i - 1]);
    }
    printf("%d\n", count);

    return 0;
}