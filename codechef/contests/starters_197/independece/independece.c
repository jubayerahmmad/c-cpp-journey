#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x == 15)
    {
        printf("0\n");
    }
    else if (x > 15)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", 15 - x);
    }
}