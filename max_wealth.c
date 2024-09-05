#include <stdio.h>

int maximumWealth(int accounts[][100], int m, int n)
{
    int max_wealth = 0; // To store the maximum wealth

    // Iterate through each customer (rows)
    for (int i = 0; i < m; i++)
    {
        int current_wealth = 0;

        // Calculate the sum of the customer's wealth (sum of all accounts in that row)
        for (int j = 0; j < n; j++)
        {
            current_wealth += accounts[i][j];
        }

        // Update the maximum wealth if the current customer has more wealth
        if (current_wealth > max_wealth)
        {
            max_wealth = current_wealth;
        }
    }

    return max_wealth; // Return the wealth of the richest customer
}

int main()
{
    int m, n;

    // Input number of customers (rows) and banks (columns)
    printf("Enter the number of customers and banks: ");
    scanf("%d %d", &m, &n);

    int accounts[100][100];

    // Input the wealth in each customer's bank account
    printf("Enter the wealth matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &accounts[i][j]);
        }
    }

    // Find and print the maximum wealth
    int result = maximumWealth(accounts, m, n);
    printf("The wealth of the richest customer is: %d\n", result);

    return 0;
}
