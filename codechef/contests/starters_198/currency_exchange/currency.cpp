/**
 * NOT SOLVED
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a1, b1, a2, b2; // 3 2 0 5
        scanf("%d%d%d%d", &a1, &b1, &a2, &b2);

        int current_val = (a1 * 5) + b1; // 17

        int total_val = (a2 * 5) + b2; // 5

        if (a1 == a2 && b1 == b2)
        {
            printf("Yes\n");
        }
        else if ((a1 + (5 * b1)) % 6 == (a2 + (5 * b2)) % 6)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}