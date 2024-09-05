#include <stdio.h>

int main() {
    int arr[10];  // Array to store 10 integers
    int i, max, min;

    // Reading 10 integers from the user
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element of the array
    max = arr[0];
    min = arr[0];

    // Find the maximum and minimum values in the array
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if current element is greater
        }
        if (arr[i] < min) {
            min = arr[i];  // Update min if current element is smaller
        }
    }

    // Print the results
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
