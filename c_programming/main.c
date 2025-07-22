#include <stdio.h>   // Provides standard input/output functions like printf
#include <stdbool.h> // Enables the use of 'bool' type and boolean constants: true, false

int main()
{
    printf("Hello World\n");

    // int: Integer type (typically 4 bytes), used for whole numbers
    int nums = 55;
    int goals = 87;
    printf("He scored %d goals\n", goals); // %d is used for printing integers
    printf("Hello this is %d \n", nums);

    // float: Single-precision decimal number (typically 4 bytes), for lower-precision real values
    float gpa = 5;
    printf("MY GPA IS %.2f \n", gpa); // %.2f limits output to 2 decimal places

    // double: Double-precision floating-point number (typically 8 bytes), used for higher-precision decimals
    double pi = 3.1416;
    printf("The value of pi is %.4lf \n", pi); // %.4lf limits output to 4 decimal places

    // char: Stores a single character (1 byte)
    char grade = 'A';
    printf("Your grade is %c \n", grade); // %c prints a single character

    // char[]: Character array used to store a string (sequence of characters)
    char name[] = "Jubayer";
    printf("My Name is %s \n", name); // %s prints the entire string

    // bool: Boolean type representing true or false (1 byte). Requires <stdbool.h>
    bool isOnline = false;

    if (isOnline)
    {
        printf("You're online"); // Runs if isOnline is true
    }
    else
    {
        printf("You're offline"); // Runs if isOnline is false
    }

    return 0; // Indicates successful termination to the OS
}
