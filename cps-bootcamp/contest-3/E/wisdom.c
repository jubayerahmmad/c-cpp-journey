/*
Problem Name: B. Ten Words of Wisdom

Problem Statement:
In the game show "Ten Words of Wisdom", there are n participants numbered from 1 to n,
each of whom submits one response. The i-th response is a_i words long and has quality b_i.
No two responses have the same quality, and at least one response has length at most 10.
The winner of the show is the response which has the highest quality out of all responses
that are not longer than 10 words. Which response is the winner?

Explanation:
The goal is to find the participant number (1-indexed) who wins the "Ten Words of Wisdom" game.
A participant's response is eligible to win only if its length (`a_i`) is 10 words or less (`a_i <= 10`).
Among all eligible responses, the one with the highest quality (`b_i`) determines the winner.
We are guaranteed that there will always be at least one eligible response and that all qualities (`b_i`) are distinct,
ensuring a unique winner.
The solution involves iterating through all participants, filtering for eligible responses,
and keeping track of the participant with the highest quality among those.
*/

#include <stdio.h>
#include <limits.h>

int main()
{

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int max_quality = INT_MIN;
        int result = 0;

        for (int i = 1; i <= n; i++)
        {
            int length, quality;
            scanf("%d %d", &length, &quality);

            if (length > 10)
            {
                continue;
            }

            if (quality > max_quality)
            {
                max_quality = quality;
                result = i;
            }
        }
        printf("%d\n", result);
    }

    return 0;
}