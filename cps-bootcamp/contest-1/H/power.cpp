/**
 * Power
 * Problem Statement 
 * Given integers A and B, print the value A^B
 * 
 */
#include <stdio.h>
#include <math.h>


int main()
{

    int a,b;
    scanf("%d%d", &a,&b);

    
    printf("%d\n",(int)pow(a,b));

    return 0;
}