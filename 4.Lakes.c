// Assume that there are four lakes b, d, t and h with totally different size. Based 
// on the following descriptions, write a program to print the size sequence from big 
// to small
// a. A student said:  lake d is the biggest one; lake h is the smallest one; 
// lake b is in third big place
// b. B student said: lake h is the biggest one; lake d is the smallest one; lake 
// b is in second big place; lake t is in third big place
// c. C student said: lake h is the smallest; lake d is in third big place
// d. D student said: lake b is the biggest one; lake t is the smallest one; lake 
// h is in second big place; lake d is in third big place
// Notice that there is only one correct answer from each student description. 

#include <stdio.h>
#include <string.h>

int main() {
    int b, d, t, h;
    char student[2];

    printf("Enter the sizes of lakes b, d, t and h separated by spaces: ");
    scanf("%d %d %d %d", &b, &d, &t, &h);

    printf("Which student's description to use? (A, B, C, D): ");
    scanf("%s", student);

    if (strcmp(student, "A") == 0) {
        printf("%d %d %d %d\n", d, b, t, h);
    } else if (strcmp(student, "B") == 0) {
        printf("%d %d %d %d\n", h, b, t, d);
    } else if (strcmp(student, "C") == 0) {
        printf("%d %d %d %d\n", d, t, h, b);
    } else if (strcmp(student, "D") == 0) {
        printf("%d %d %d %d\n", b, h, d, t);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}
