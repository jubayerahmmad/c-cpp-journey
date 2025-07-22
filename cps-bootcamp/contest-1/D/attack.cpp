/**
 * Problem Statement
 * 
 * There is an enemy with stamina A. Every time you attack the enemy, its stamina reduces by B.
 * At least how many times do you need to attack the enemy to make its stamina 0 or less?
 * 
 */
#include <stdio.h>


int main()
{
    long long a,b;
    
    scanf("%lld%lld", &a,&b);
    
    long long x = (a+b-1)/b;
    
    printf("%lld\n",x);

    return 0;
}