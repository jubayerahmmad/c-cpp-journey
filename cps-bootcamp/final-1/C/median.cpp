#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[4];
    int b[4];
    int c[4];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &c[i]);
    }

    sort(a, a + 3);
    sort(b, b + 3);
    sort(c, c + 3);

    int final[4] = {a[1], b[1], c[1]};
    sort(final, final + 3);

    printf("%d\n", final[1]);
    return 0;
}