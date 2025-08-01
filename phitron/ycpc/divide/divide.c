#include <stdio.h>

int main()
{

    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    char num[n + 2];

    scanf("%s", num);

    int digit_x = num[x - 1] - '0';
    int digit_y = num[y - 1] - '0';

    if ((digit_y != 0 && digit_x % digit_y == 0) || (digit_x != 0 && digit_y % digit_x == 0))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}