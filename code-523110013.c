// Devanshu - 523110013 - Group 1
// Write a program to reverse an array by using only a single pointer variable.

#include <stdio.h>

int main() {
    int n, t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    // taking input
    for (int i=0;i<n;i++) {
        scanf("%d", &t);
        arr[i] = t;
    }

    // reverseing array
    for (int i=0;i<n/2;i++) {
        t = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = t;
    }

    // printing array
    for (int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
