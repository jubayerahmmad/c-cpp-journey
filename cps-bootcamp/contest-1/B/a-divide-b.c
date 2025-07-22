/**
 * A/B problem
 *
 * Write a program which reads two integers a and b, and calculates the following values:
 * a ÷ b: d (in integer)
 * remainder of a ÷ b: r (in integer)
 * a ÷ b: f (in real number)
 * Input
 * Two integers a and b are given in a line.
 * Output
 * Print d, r and f separated by a space in a line. For f, the output should not contain an absolute error greater than 10-5.
 */

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d %.6lf", a / b, a % b, (double)a / b);
    return 0;
}