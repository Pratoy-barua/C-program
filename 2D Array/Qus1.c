#include<stdio.h>
int main()
{
    int a[3][3];
    int row, col;
    printf("Enter the values of matrix:");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
    return 0;
}
