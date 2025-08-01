#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long a, b;
    scanf("%lld %lld", &a, &b);

    int carry = 0;

    while (a != 0 && b != 0)
    {
        int last_digit_a = a % 10;
        int last_digit_b = b % 10;

        if (last_digit_a + last_digit_b >= 10)
        {
            carry = 1;
            break;
        }
        else
        {
            a /= 10;
            b /= 10;
        }
    }

    if (carry)
    {

        printf("Hard\n");
    }
    else
    {

        printf("Easy\n");
    }

    return 0;
}