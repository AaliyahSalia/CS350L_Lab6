//  Write a program to verify whether a number from keyboard input is divisible by 3, 
// 5 and 7 or not.
// a. If it is divisible by all three numbers, print 3,5,7 results on the screen. 
// b. If it is divisible by any two numbers, print two numbers from 3, 5 ,7 
// ascendingly on the screen.
// c. If it is divisible by only one number, just print it on the screen.
// d. If it is NOT divisible by any one number, just print NOT on the screen.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0) {
        printf("Divisible by 3, 5, 7\n");
    } else if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by 3, 5\n");
    } else if (num % 3 == 0 && num % 7 == 0) {
        printf("Divisible by 3, 7\n");
    } else if (num % 5 == 0 && num % 7 == 0) {
        printf("Divisible by 5, 7\n");
    } else if (num % 3 == 0) {
        printf("Divisible by 3\n");
    } else if (num % 5 == 0) {
        printf("Divisible by 5\n");
    } else if (num % 7 == 0) {
        printf("Divisible by 7\n");
    } else {
        printf("NOT\n");
    }
    return 0;
}
