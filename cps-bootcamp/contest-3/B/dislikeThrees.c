/*
Problem Name: B - Dislike of Threes

Problem Statement:
Polycarp doesn't like integers that are divisible by 3 or end with the digit 3 in their decimal representation.
Integers that meet both conditions are disliked by Polycarp, too.
Polycarp starts to write out the positive (greater than 0) integers which he likes:
1, 2, 4, 5, 7, 8, 10, 11, 14, 16, .... Output the k-th element of this sequence (the elements are numbered from 1).

Explanation:
The core of this problem is to identify and list numbers that Polycarp "likes". A number is liked if it
is NOT divisible by 3 AND it does NOT end with the digit 3.
The sequence provided (1, 2, 4, 5, 7, 8, 10, 11, 14, 16, ...) shows positive integers filtered by these rules.
For example:
- 3 is disliked because it's divisible by 3.
- 6 is disliked because it's divisible by 3.
- 13 is disliked because it ends with 3.
- 30 is disliked because it's divisible by 3 (and also ends with 0, but the divisible by 3 rule applies).
- 33 is disliked because it's divisible by 3 AND ends with 3.

The task is, given an input `k`, to find the `k`-th number in this specific sequence of "liked" numbers.
Since the maximum value of `k` is relatively small (1000), a common and efficient approach is to
precompute this sequence up to at least 1000 elements. Then, for each test case, we can directly
look up the `k`-th element from the precomputed list.
*/

#include <stdio.h>

int main()
{

    int t, k;
    scanf("%d", &t);

    while (t--)
    {

        scanf("%d", &k);
        int count = 1;

        for (int i = 1;; i++)
        {
            int lastDigit = i % 10;
            if (i % 3 == 0 || lastDigit == 3)
            {
                continue;
            }

            if (count == k)
            {
                printf("%d\n", i);
                break;
            }
            count++;
        }
    }

    return 0;
}