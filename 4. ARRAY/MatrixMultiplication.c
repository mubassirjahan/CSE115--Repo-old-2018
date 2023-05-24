#include<stdio.h>

int main()
{
    int A[100][100], B[100][100], C[100][100];
    int i,j,k,rowA,columnA,rowB,columnB;

    do
    {
        printf("Enter the number of row and column of A matrix: ");
        scanf("%d%d",&rowA,&columnA);
        printf("Enter the number of row and column of B matrix: ");
        scanf("%d%d",&rowB,&columnB);
    }while(rowA!=rowB&&columnA!=columnB);

    for(i=0;i<rowA;i++)
    {
        for(j=0;j<columnA;j++)
        {
            printf("Enter Elements of A [%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<rowB;i++)
    {
        for(j=0;j<columnB;j++)
        {
            printf("Enter Elements of B [%d][%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }


    for(i=0;i<rowA;i++)
    {
        for(j=0;j<columnB;j++)
        {
            for(k=0;k<columnA;k++)
            {
                C[i][j]=A[i][k]*B[k][j];
            }
        }
        printf("\n");
    }

    printf("AB: \n")
    for(i=0; i<rowA; i++){
        for(j=0;j<columnB; j++){
            printf("%d   ",C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
