/**
 *
 */

#include <stdio.h>

int main()
{

    long long n;
    scanf("%lld", &n);

    long long totalOnes = 0;

    for (long long i = 1; i <= n; i++)
    {
        long long x = i;
        while (x > 0)
        {
            totalOnes += x % 2;
            x /= 2;
        }
    }
    printf("%lld\n", totalOnes);

    return 0;
}