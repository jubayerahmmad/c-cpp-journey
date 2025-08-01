#include <stdio.h>

int reverse(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int last = num % 10;
        rev = rev * 10 + last;
        num /= 10;
    }
    return rev;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a, b;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        int reversed_a = reverse(a);
        int reversed_b = reverse(b);

        int reversed_sum = reversed_a + reversed_b;

        int reversed_reversed_sum = reverse(reversed_sum);
        printf("reversed-rev-sum-->%d\n", reversed_reversed_sum);
    }

    return 0;
}
