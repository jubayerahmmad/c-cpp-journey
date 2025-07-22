/**
 * Infinite Coins
 * Problem Statement
 * E869120 has 1-yen coins and infinitely many 500-yen coins.
 * Determine if he can pay exactly N yen using only these coins.
 * 
 * If E869120 can pay exactly N yen using only his 1-yen and 500-yen coins, print Yes; otherwise, print No.
 */

#include <stdio.h>


int main()
{

	int target, oneYens;
	scanf("%d %d", &target,&oneYens);
	
	int neededOneYens = target % 500;

    if(oneYens >= neededOneYens){
		printf("Yes\n");
	} 
    else {
		printf("No\n");
	}


	return 0;
}