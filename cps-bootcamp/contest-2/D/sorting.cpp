/**
 * Sorting three numbers
 * 
 * Write a program which reads three integers, and prints them in ascending order.
 * Input
 * Three integers separated by a single space are given in a line.
 * Output
 * Print the given integers in ascending order in a line. Put a single space between two integers.
 */


#include <stdio.h>

int main()
{

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a <= b && b <= c){
        printf("%d %d %d\n", a , b ,c);
    }
    else if(b <= c && c <= a){
        printf("%d %d %d\n", b , c ,a);
    }
    else if(a <= c && c <= b){
        printf("%d %d %d\n", a , c ,b);
    }
    else if(c <= a && a <= b){
        printf("%d %d %d\n", c , a ,b);
    }
    else if(b <= a && a <= c){
        printf("%d %d %d\n", b , a ,c);
    }
    else if(c <= b && b <= a){
        printf("%d %d %d\n", c , b ,a);
    }


    return 0;
}