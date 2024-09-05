#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;
    int mat1[10][10], mat2[10][10], result[10][10];
    int i, j, k;

    // Input the dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);

    // Input the dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);

    // Check if matrix multiplication is possible
    if (col1 != row2)
    {
        printf("Matrix multiplication not possible! Number of columns in Matrix 1 must equal number of rows in Matrix 2.\n");
        return 1;
    }

    // Input the elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input the elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialize the result matrix to 0
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            for (k = 0; k < col1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the resulting matrix
    printf("Resulting matrix after multiplication:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

