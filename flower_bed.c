#include <stdio.h>

int canPlaceFlowers(int flowerbed[], int flowerbedSize, int n)
{
    int i = 0;

    while (i < flowerbedSize)
    {
        // Check if the current plot is empty (flowerbed[i] == 0)
        // Also check if the previous plot (i == 0 or flowerbed[i-1] == 0) and the next plot (i == flowerbedSize-1 or flowerbed[i+1] == 0) are empty
        if (flowerbed[i] == 0 &&
            (i == 0 || flowerbed[i - 1] == 0) &&
            (i == flowerbedSize - 1 || flowerbed[i + 1] == 0))
        {

            flowerbed[i] = 1; // Plant a flower
            n--;              // Reduce the number of flowers to plant

            if (n == 0)
            {
                return 1; // All flowers have been planted, return true
            }

            i += 2; // Move to the next non-adjacent plot (skip the next plot)
        }
        else
        {
            i++; // Move to the next plot
        }
    }

    return n <= 0; // Return true if all flowers have been planted, false otherwise
}

int main()
{
    int flowerbed[] = {1, 0, 0, 0, 1};
    int n = 1;
    int flowerbedSize = sizeof(flowerbed) / sizeof(flowerbed[0]);

    if (canPlaceFlowers(flowerbed, flowerbedSize, n))
    {
        printf("True\n"); // We can plant the required number of flowers
    }
    else
    {
        printf("False\n"); // We cannot plant the required number of flowers
    }

    return 0;
}
