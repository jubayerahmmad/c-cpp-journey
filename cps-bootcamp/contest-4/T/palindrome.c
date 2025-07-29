/**
 * Palindrome Reorder
 */

#include <stdio.h>
#include <string.h>

int s[1000001];

int main()
{

    scanf("%s", s);

    int freq[26];

    int n = strlen(s);

    for (int i = 0; i < 26; i++)
    {
        freq[0];
    }

    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 65]++;
    }

    return 0;
}