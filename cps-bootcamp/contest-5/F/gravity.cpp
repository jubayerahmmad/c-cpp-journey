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

    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}