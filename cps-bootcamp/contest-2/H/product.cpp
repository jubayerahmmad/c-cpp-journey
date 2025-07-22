/**
 * Product (EVEN or ODD)
 * Problem Statement
 * AtCoDeer the deer found two positive integers a,b. Determine whether the product of a and b is even or odd.
 */

#include <stdio.h>


int main()
{

	int a,b;

	scanf("%d %d", &a,&b);

	if((a*b) % 2 ==0) {
	printf("Even\n");
	}else{
	printf("Odd\n");
	}

	return 0;
}