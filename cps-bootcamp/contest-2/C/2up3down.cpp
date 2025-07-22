/**
 * 2UP3DOWN
 * Problem Statement
 * 
 * Takahashi is in a building with 100 floors.
 * He uses the stairs for moving up two floors or less or moving down three floors or less, and uses the elevator otherwise.
 * Does he use the stairs to move from floor X to floor Y?
 * If Takahashi uses the stairs for the move, print Yes; if he uses the elevator, print No
 * 
 */

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if (a<b && (b - a) <= 2) {
        printf("Yes");
    }else if(a>b && (a - b) <= 3){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}