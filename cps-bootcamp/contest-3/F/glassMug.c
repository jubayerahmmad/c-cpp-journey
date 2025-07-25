/*
Problem Name: F - Glass and Mug

Problem Statement:
AtCoder Inc. sells glasses and mugs.
Takahashi has a glass with a capacity of G milliliters and a mug with a capacity of M milliliters.
Here, G < M.
Initially, both the glass and the mug are empty.
After performing the following operation K times, determine how many milliliters of water are in the glass and the mug, respectively.

Operation Rules:
- When the glass is filled with water, that is, the glass contains exactly G milliliters of water, discard all the water from the glass.
- Otherwise (if the glass is not full):
    - If the mug is empty, fill the mug with water.
    - Otherwise (if the mug is not empty), transfer water from the mug to the glass until the mug is empty or the glass is filled with water.

Constraints:
- 1 <= K <= 100 (Number of operations)
- 1 <= G < M <= 1000 (Capacities of glass and mug)
- G, M, and K are integers.

Input Format:
K G M (integers separated by spaces)

Output Format:
Print the amounts, in milliliters, of water in the glass and the mug, in this order, separated by a space,
after performing the operation K times.

Example: (Based on Sample 1 from the image)
Input: 5 300 500
Output: 200 500

Explanation:
This problem simulates a water transfer process between a glass and a mug over a series of `K` operations.
We need to keep track of the amount of water in the glass and the mug after each operation and report their final states.

*/

#include <stdio.h>

int main()
{

    int k, g, m;
    scanf("%d %d %d", &k, &g, &m);

    int glass_water = 0;
    int mug_water = 0;

    for (int i = 1; i <= k; i++)
    {

        if (glass_water == g)
        {
            glass_water = 0;
        }
        else if (mug_water == 0)
        {
            mug_water = m;
        }
        else
        {
            int empty = g - glass_water;

            if (empty >= mug_water)
            {
                glass_water += mug_water;
                mug_water = 0;
            }
            else
            {
                mug_water = mug_water - empty;
                glass_water = g;
            }
        }
    }

    printf("%d %d\n", glass_water, mug_water);

    return 0;
}