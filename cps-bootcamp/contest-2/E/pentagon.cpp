/*
Problem: Pentagon Segment Length Comparison

Given a regular pentagon with vertices A, B, C, D, E.
Determine if length of segment S1S2 equals length of segment T1T2.
S1, S2, T1, T2 are vertices.

Input:
Line 1: S1S2 (e.g., AB, AC)
Line 2: T1T2 (e.g., CD, EA)

Output: "Yes" or "No"

Logic:
Segments can only be two distinct lengths:
1. Side (adjacent vertices, e.g., AB, BC, DE, EA) - "distance" 1
2. Diagonal (non-adjacent vertices, e.g., AC, AD, BD) - "distance" 2

Calculate "cyclic distance" for each pair (e.g., A-B is 1, A-C is 2, A-D is 2, A-E is 1).
If distances are equal, print "Yes", else "No".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1,s2,t1,t2,temp;
    scanf("%c%c%c%c%c", &s1, &s2, &temp, &t1, &t2);
    
    int diff1 = abs(s1-s2);
    if(diff1 > 2) diff1 = 5-diff1;
    
    int diff2 = abs(t1-t2);
    if(diff2 > 2) diff2 = 5-diff2;
    
    if(diff1 == diff2) printf("Yes\n");
    else printf("No\n");
    
    return 0;
}