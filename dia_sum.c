#include <stdio.h>

int diagonalSum(int mat[][100], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        // Add element from the primary diagonal
        sum += mat[i][i];

        // Add element from the secondary diagonal, if it's not the same as the primary diagonal element
        if (i != n - i - 1)
        {
            sum += mat[i][n - i - 1];
        }
    }

    return sum;
}

int main()
{
    int n;

    // Input the size of the matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int mat[100][100]; // Declare a 100x100 matrix (assuming max size is 100)

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Compute and print the sum of diagonals
    int result = diagonalSum(mat, n);
    printf("Sum of the matrix diagonals: %d\n", result);

    return 0;
}
