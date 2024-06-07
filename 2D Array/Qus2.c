#include<stdio.h>
int main()
{
    int a[100][100];
    int row, col;
    int r1, c1;
    printf("Enter the numbers of row:");
    scanf("%d", &r1);
    printf("Enter the numbers of col:");
    scanf("%d", &c1);

    printf("Enter the numbers:\n");
    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            scanf("%d", &a[row][col]);
        }

    }

    printf("Row-wise:");
    for(row=0; row<r1; row++)
    {
        for(col=0; col<c1; col++)
        {
            printf("%d ", a[row][col]);
        }

    }
    printf("\n");

    printf("Column-wise:");
    for(row=0; row<c1; row++)
    {
        for(col=0; col<r1; col++)
        {
            printf("%d ", a[col][row]);
        }

    }


}
