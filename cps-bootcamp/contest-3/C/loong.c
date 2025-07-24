/**
 *
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char x[n + 1];
    x[0] = '\0';

    for (int i = 0; i < n; i++)
    {
        strcat(x, "o");
    }

    printf("L%sng\n", x);

    return 0;
}