#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a;

        scanf("%d", &a);

        int sum = 0;

        while (a > 0)
        {
            int last_digit = a % 10;
            sum += last_digit;
            a /= 10;
        }
        printf("%d\n", sum);
    }

    return 0;
}
