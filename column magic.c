#include <stdio.h>

#define x 10
#define y 10

// Function to check if the 2D array is column-magic
int isColumnMagic(int rows, int cols, int arr[x][y])
{
    // Calculate the sum of the elements in the first column
    int col1 = 0;
    for (int i = 0; i < rows; i++)
    {
        col1 += arr[i][0];
    }

    // Check if every column has the same sum as the first column
    for (int j = 1; j < cols; j++)
    {
        int col = 0;
        for (int i = 0; i < rows; i++)
        {
            col += arr[i][j];
        }

        // If the sum of the current column is not equal to the sum of the first column, return 0 (false)
        if (col != col1)
        {
            return 0; // Not column-magic
        }
    }

    // If all columns have the same sum, return 1 (true)
    return 1; // Column-magic
}

int main()
{
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input the 2D array elements
    int arr[x][y];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check if the array is column-magic
    if (isColumnMagic(rows, cols, arr))
    {
        printf("The given values are column-magic.\n");
    }
    else
    {
        printf("The given values aren't column-magic property.\n");
    }

    return 0;
}

// end 