#include <stdio.h>

int main() {
    double arr[5]; // Array to store 5 real numbers
    int i;
    double sum = 0.0, product = 1.0;

    // Reading 5 real numbers from the user
    printf("Enter 5 real numbers: \n");
    for (i = 0; i < 5; i++) {
        scanf("%lf", &arr[i]);
    }

    // Compute the sum and product of all elements in the array
    for (i = 0; i < 5; i++) {
        sum += arr[i];        // Adding each element to the sum
        product *= arr[i];    // Multiplying each element to the product
    }

    // Print the sum and product
    printf("Sum of the elements: %f\n", sum);
    printf("Product of the elements: %f\n", product);

    return 0;
}
