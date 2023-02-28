// Given an array with integer numbers read-in from keyboard to each element, write 
// program to rotate these integer numbers by m times scanned-in from keyboard. 
// Notice that only one array in your program is allowed.
 
// Output:
// Enter an array size: 11
// Enter number of rotation: 4
// Enter numbers for your array: 15 3 76 67 84 87 13 67 45 34 45
// Results: 67 45 34 45 15 3 76 67 84 87 13

#include <stdio.h>

void rotate(int arr[], int n, int m) {
    m = m % n;
    
    for (int i = 0; i < m/2; i++) {
        int temp = arr[i];
        arr[i] = arr[m-1-i];
        arr[m-1-i] = temp;
    }
    
    for (int i = m; i < (n+m)/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n+m-1-i];
        arr[n+m-1-i] = temp;
    }
    
    for (int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

int main() {
    int n, m;
    
    printf("Enter an array size: ");
    scanf("%d", &n);
    
    printf("Enter number of rotation: ");
    scanf("%d", &m);
    
    int arr[n];
    
    printf("Enter numbers for your array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    rotate(arr, n, m);
    
    printf("Results: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
