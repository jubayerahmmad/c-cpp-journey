/**
 * PLACING MARBLES
 * Problem Statement
 * Snuke has a grid consisting of three squares numbered 1, 2, 3. In each square, either 0 or 1 is written. The number written in Square i is Si .
 * Snuke will place a marble on each square that says 1. Find the number of squares on which Snuke will place a marble.
 */

#include <stdio.h>


int main()
{

	int res=0;
	char s[4];

	scanf("%s", &s);

	if(s[0] == '1') {
		res++;
	}
	if(s[1] == '1') {
		res++;
	}
	if(s[2] == '1') {
		res++;
	}


	printf("%d\n", res);

	return 0;
}