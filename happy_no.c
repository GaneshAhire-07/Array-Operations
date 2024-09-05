#include <stdio.h>

int sum_of_squares(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;   // Get the last digit
        sum += digit * digit; // Add square of the digit
        n /= 10;              // Remove the last digit
    }
    return sum;
}

int is_happy_number(int n)
{
    int seen_numbers[1000] = {0}; // Array to track numbers we've seen

    while (n != 1)
    {
        if (seen_numbers[n])
        {
            return 0; // If we've seen this number before, it's not a happy number
        }

        seen_numbers[n] = 1;   // Mark the number as seen
        n = sum_of_squares(n); // Replace number with sum of squares of digits
    }

    return 1; // If we reach 1, it's a happy number
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_happy_number(n))
    {
        printf("True\n"); // The number is a happy number
    }
    else
    {
        printf("False\n"); // The number is not a happy number
    }

    return 0;
}
