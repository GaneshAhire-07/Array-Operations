#include <stdio.h>

// Function to flip the image horizontally and invert it
void flipAndInvertImage(int image[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        int left = 0, right = n - 1;

        // Flip the row by swapping elements from the ends towards the middle
        while (left <= right)
        {
            // Swap and invert at the same time
            int temp = image[i][left] ^ 1;        // Invert left element
            image[i][left] = image[i][right] ^ 1; // Invert right element and place it at the left
            image[i][right] = temp;               // Place the inverted left element at the right
            left++;
            right--;
        }
    }
}

int main()
{
    int n;

    // Input size of the matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int image[100][100];

    // Input the matrix
    printf("Enter the binary matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &image[i][j]);
        }
    }

    // Perform flip and invert operation
    flipAndInvertImage(image, n);

    // Output the resulting matrix
    printf("Resulting matrix after flip and invert:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }

    return 0;
}
