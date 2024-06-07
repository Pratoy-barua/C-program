#include<stdio.h>
int main()
{
    int row, col, numofrows, numofcols;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    printf("Enter the numbers of rows and cols:");
    scanf("%d %d", &numofrows, &numofcols);

    printf("Enter the elements of A matrix:\n");
    for(row=0; row<numofrows; row++)
    {
        for(col=0; col<numofcols; col++)
        {
            printf("a[%d] [%d]=", row,col);
            scanf("%d", &a[row][col]);
        }
        printf("\n");
    }
     for(row=0; row<numofrows; row++)
    {
        for(col=0; col<numofcols; col++)
        {
            printf("%d", a[row][col]);
        }
        printf("\n");
    }

    printf("Enter the elements of B matrix:\n");
    for(row=0; row<numofrows; row++)
    {
        for(col=0; col<numofcols; col++)
        {
            printf("b[%d] [%d]=", row,col);
            scanf("%d", &b[row][col]);
        }
        printf("\n");
    }
     for(row=0; row<numofrows; row++)
    {
        for(col=0; col<numofcols; col++)
        {
            printf("%d", b[row][col]);
        }
        printf("\n");
    }

    for(row=0; row<numofrows; row++)
    {
        for(col=0; col<numofcols; col++)
        {
            c[row][col]= a[row][col] + b[row][col];
        }
    }

    printf("\nA+B=");
    for(row=0; row<numofrows; row++)
    {
        printf("\t");
        for(col=0; col<numofcols; col++)
        {
            printf("%d ", c[row][col]);
        }
        printf("\n");
    }

  return 0;
}

