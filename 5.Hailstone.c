// Write a program to read in any integer number from keyboard and print hailstone 
// sequence. 
// Hint: hailstone sequence is starting from any integer n. If it is odd, the next is 
// 3n+1, and then continues doing this, but if it is even, the next is n/2 until final 
// pattern is always 4-2-1

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    printf("%d ", n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf("%d ", n);
    }
    printf("\n");

    return 0;
}
