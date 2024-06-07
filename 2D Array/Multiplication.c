#include<stdio.h>
int main()
{
    int a[100][100];
    int b[100][100];
    int c[100][100];
    int result[100][100];
    int row,col, sum=0;
    int r1,c1, r2, c2, k;
    printf("Enter the numbers of rows of A matrix:");
    scanf("%d", &r1);
    printf("Enter the numbers of cols of A matrix:");
    scanf("%d", &c1);
    printf("Enter the numbers of rows of B matrix:");
    scanf("%d", &r2);
    printf("Enter the numbers of cols of B matrix:");
    scanf("%d", &c2);

    while(c1!=r2)
    {
        printf("Error! Please input the same value of c1 & r2");

    printf("\nEnter the numbers of rows of A matrix:");
    scanf("%d", &r1);
    printf("Enter the numbers of cols of A matrix:");
    scanf("%d", &c1);
    printf("Enter the numbers of rows of B matrix:");
    scanf("%d", &r2);
    printf("Enter the numbers of cols of B matrix:");
    scanf("%d", &c2);
    }
    //matrix inpute
    printf("\nEnter the values of A matrix:");
        for(row=0; row<r1; row++)
        {
            for(col=0; col<c1; col++)
            {
                printf("\nA[%d][%d]: ", row,col);
                scanf("%d", &a[row][col]);
            }

        }

    printf("\nEnter the values of B matrix:");
        for(row=0; row<r2; row++)
        {
            for(col=0; col<c2; col++)
            {
                printf("\nB[%d][%d]: ", row,col);
                scanf("%d", &b[row][col]);
            }

        }

    //matrix print
    printf("\nA matrix:\n");
        for(row=0; row<r1; row++)
        {
            for(col=0; col<c1; col++)
            {
                printf("%d ", a[row][col]);
            }
            printf("\n");

        }

    printf("B matrix:\n");
        for(row=0; row<r2; row++)
        {
            for(col=0; col<c2; col++)
            {
                printf("%d ", b[row][col]);
            }
            printf("\n");

        }

        //Multiplication
        for(row=0; row<r1; row++)
        {
            for(col=0; col<c2; col++)
            {
                for(k=0; k<c1; k++)
                {
                    sum = sum + a[row][k] * b[k][col];
                }
                result[row][col] = sum;
                sum =0;
            }
        }

        //printing result matrix
        printf("\nResult Matrix:\n");
        for(row=0; row<r1; row++)
        {
            for(col=0; col<c2; col++)
            {
                printf("%d ", result[row][col]);
            }
            printf("\n");
        }



}
