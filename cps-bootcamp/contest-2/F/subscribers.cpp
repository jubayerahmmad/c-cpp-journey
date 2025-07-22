/*
Problem: Subscribers (F)

Given an integer N (0 <= N <= 10^9 - 1),
output an approximated version of N based on its magnitude.
Print an approximation of N according to the following instructions.
The approximation involves truncating digits from the right.

Rules for Truncation:
- If N < 1000 (i.e., 0-999): Print N as is. (Divide by 1)
  Example: N=123 -> 123
- If 1000 <= N < 10000: Truncate ones digit. (N / 10)
  Example: N=1234 -> 123
- If 10000 <= N < 100000: Truncate tens digit and below. (N / 100)
  Example: N=12345 -> 123
- If 100000 <= N < 1000000: Truncate hundreds digit and below. (N / 1000)
  Example: N=123456 -> 123
- If 1000000 <= N < 10000000: Truncate thousands digit and below. (N / 10000)
  Example: N=1234567 -> 123
- If 10000000 <= N < 100000000: Truncate ten-thousands digit and below. (N / 100000)
  Example: N=12345678 -> 123
- If 100000000 <= N < 1000000000: Truncate hundred-thousands digit and below. (N / 1000000)
  Example: N=123456789 -> 123

Input: Single integer N.
Output: The truncated integer.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if(n<1000){
        printf("%d\n",n);
    }
    else if(n<10000){
        printf("%d\n",(n/10)*10);
    }
    else if(n<100000){
        printf("%d\n",(n/100)*100);
    }
    else if(n<1000000){
        printf("%d\n",(n/1000)*1000);
    }
    else if(n<10000000){
        printf("%d\n",(n/10000)*10000);
    }
    else if(n<100000000){
        printf("%d\n",(n/100000)*100000);
    }
    else if(n<1000000000){
        printf("%d\n",(n/1000000)*1000000);
    }else{
        printf("%d\n",(n/10000000)*10000000);
    }
    return 0;
}