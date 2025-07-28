/**
 *
 */

#include <stdio.h>

int main()
{

    int h, w; // 2 3
    scanf("%d %d", &h, &w);

    int a[h][w];

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                printf(".");
            }
            else
            {

                printf("%c", 64 + a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}