/**
 * Circle
 *
 * Write a program which calculates the area and circumference of a circle for given radius r.
 * Input
 * A real number r is given.
 * Output
 * Print the area and circumference of the circle in a line. Put a single space between them. The output should not contain an absolute error greater than 10-5.
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double pi = acos(-1);
    double r;
    scanf("%lf", &r);

    double area = pi * r * r;
    double circ = 2 * pi * r;

    printf("%.6lf %.6lf\n", area, circ);
    return 0;
}