/**
 * Probaly English
 */

#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);

    char s[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &s);
        if (strcmp(s, "and") == 0 || strcmp(s, "not") == 0 || strcmp(s, "that") == 0 ||
            strcmp(s, "the") == 0 ||
            strcmp(s, "you") == 0)
        {
            printf("Yes\n");
            break;
        }
        else if (i == n - 1)
        {
            printf("No\n");
        }
    }

    return 0;
}