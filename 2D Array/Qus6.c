#include<stdio.h>
int main()
{
    int row, col;
    printf("Enter the size of row:");
    scanf("%d", &row);
    printf("Enter the size of col:");
    scanf("%d", &col);

    int A[row][col], B[row][col], C[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            C[i][j]= A[i][j] + B[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d", C[i][j]);
        }
        printf("\n");
    }
    return 0;



}
