/**
 * Count order
 */
#include <bits/stdc++.h>
using namespace std;

int orderOfPermutation(int a[], int n)
{
    int perm[n];
    for (int i = 0; i < n; i++)
    {
        perm[i] = i + 1;
    }

    int ans = 1;
    do
    {
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != perm[i])
                flag = 0;
        }
        if (flag)
            return ans;

        ans++;

    } while (next_permutation(perm, perm + n));

    return -1;
}

int main()
{

    int n;
    scanf("%d", &n);

    int p[n], q[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &q[i]);
    }

    int a = orderOfPermutation(p, n);
    int b = orderOfPermutation(q, n);

    printf("%d\n", abs(a - b));

    return 0;
}