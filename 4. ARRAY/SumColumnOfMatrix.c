#include <stdio.h>

int main()
{
    int rows, columns;
    int i,j, col, sum = 0;

    printf("Enter number of rows");
    scanf("%d", &rows);
    printf("Enter number of columns");
    scanf("%d", &columns);

    int arr[rows][columns];
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the column you want to add");
    scanf("%d",&col);
    col--;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            if(j==col)
                sum+= arr[i][j];
        }
    }

    printf("Sum: %d", sum);

    return 0;
}
