#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        if (a == b && a != c)
        {
            printf("%d\n", c);
        }
        else if (c == b && c != a)
        {
            printf("%d\n", a);
        }
        else if (c == a && c != b)
        {
            printf("%d\n", b);
        }
    }

    return 0;
}
