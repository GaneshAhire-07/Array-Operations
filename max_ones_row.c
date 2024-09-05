#include <stdio.h>

void findMaxOnesRow(int mat[][100], int m, int n)
{
    int max_ones = 0;   // To store the maximum count of ones
    int row_index = -1; // To store the index of the row with maximum ones

    // Iterate through each row
    for (int i = 0; i < m; i++)
    {
        int ones_count = 0; // Count ones in the current row

        // Count the number of ones in the current row
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
            {
                ones_count++;
            }
        }

        // Check if this row has more ones than the previous rows
        if (ones_count > max_ones)
        {
            max_ones = ones_count;
            row_index = i; // Update the row index with maximum ones
        }
    }

    // Print the result
    printf("Row index: %d, Number of ones: %d\n", row_index, max_ones);
}

int main()
{
    int m, n;

    // Input the size of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int mat[100][100];

    // Input the binary matrix
    printf("Enter the binary matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    // Find and print the row with the maximum number of ones
    findMaxOnesRow(mat, m, n);

    return 0;
}
