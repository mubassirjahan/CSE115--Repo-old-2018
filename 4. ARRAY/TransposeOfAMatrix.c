#include <stdio.h>

int main()
{
    int row, col, i, j;
    printf("Enter row and column: ");
    scanf("%d%d", &row, &col);
    if(row!=col)
    {
        printf("It' s not a square matrix.");
        return 0;
    }
    int mat[row][col];
    int trs[row][col];

    printf("Input the elements of the matrices: ");

    for(i=0;i<row;i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The transpose matrices is:");

    for(i=0;i<row;i++)
    {
        for(j=0; j<col; j++)
        {
            trs[i][j]=mat[j][i];
        }
    }


    for(i=0;i<row;i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d",trs[i][j]);
        }
        printf("\n");
    }

    return 0;
}
