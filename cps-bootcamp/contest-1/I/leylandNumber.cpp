/**
 * Leyland Number
 * Problem Statement
 * You are given positive integers A and B
 * Print the value of A^B + B^A;
 */

#include <stdio.h>
#include <math.h>


int main()
{

    int a,b;
    scanf("%d%d", &a,&b);
    
    int result = pow(a,b) + pow(b,a);
    
    printf("%d\n",result);

    return 0;
}