/**
 * 
 * Rotate
 * 
 * Let xyz denote the 3-digit integer whose digits are x, y, z from left to right.
 * Given a 3-digit integer abc none of whose digit is 0, find abc + bca + cab
 * 
 */

 #include <stdio.h>


int main()
{

    char a,b,c;
    scanf("%c%c%c", &a,&b,&c);
    int abc = (a - '0')*100 + (b - '0')*10 + (c - '0')*1;
    int bca = (b - '0')*100 + (c - '0')*10 + (a - '0')*1;
    int cab = (c - '0')*100 + (a - '0')*10 + (b - '0')*1;

    
    printf("%d\n",abc+cab+bca);

    return 0;
}