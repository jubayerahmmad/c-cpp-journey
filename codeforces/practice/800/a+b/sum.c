#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char a[4];

        scanf("%s", a);

        int sum = a[0] - '0' + a[2] - '0';

        printf("%d\n", sum);
    }

    return 0;
}
