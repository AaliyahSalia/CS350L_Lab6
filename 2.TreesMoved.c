// Assume that a school is located along the straight long road with length L, and 
// trees with even 1 meter distance between any two were planted on one side of the 
// road. You may take this road as x axis starting zero point and terminating at L 
// point, and each tree stands at integer number point, such as 0, 1, 2, 3, ... L. The 
// city council made a decision to build subways underneath the road and other 
// facilities on the ground along the road. So, trees in SOME areas with integer 
// intervals, which staring point & ending point are integer as well, must be moved to 
// other districts in the city. Write program to calculate how many trees need to 
// move.
// Output:
// Enter the length of the road: 500
// Enter how many areas are needed for new facilities: 3
// area#1 staring point & ending point: 150 300
// area#2 staring point & ending point: 100 200
// area#3 staring point & ending point: 470 471
// Result of number of trees needed to move: ? 
// Enter the length of the road: 500
// Enter how many areas are needed for new facilities: 4
// area#1 staring point & ending point: 100 200
// area#2 staring point & ending point: 150 160
// area#3 staring point & ending point: 180 190
// area#3 staring point & ending point: 150 300
// Result of number of trees needed to move: ? 

#include <stdio.h>

int main() {
    int roadLength, numAreas, start, end, treesMoved = 0;
    printf("Enter the length of the road: ");
    scanf("%d", &roadLength);
    printf("Enter how many areas are needed for new facilities: ");
    scanf("%d", &numAreas);
    for (int i = 1; i <= numAreas; i++) {
        printf("area#%d starting point & ending point: ", i);
        scanf("%d %d", &start, &end);
        treesMoved += (end - start + 1); 
    }
    printf("Result of number of trees needed to move: %d", treesMoved);
    return 0;
}
