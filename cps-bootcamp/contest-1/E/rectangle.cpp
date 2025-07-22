/**
 * RECTANGLE
 * 
 * Write a program which calculates the area and perimeter of a given rectangle.
 * Input
 * The length a and breadth b of the rectangle are given in a line separated by a single space.
 * Output
 * Print the area and perimeter of the rectangle in a line. The two integers should be separated by a single space.
 * Constraints
 * 1 ≤ a, b ≤ 100
 * 
 */

 #include <stdio.h>


int main()
{

    int a,b;
    scanf("%d%d", &a,&b);
    
    int area =a*b;
    int perimeter = 2 *(a+b);
    
    
    printf("%d %d\n", area,perimeter);

    return 0;
}