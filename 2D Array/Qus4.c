#include<stdio.h>
int main()
{
    int size, row, col;

    printf("Enter the size of array:");
    scanf("%d", &size);
    int a[size][size];

    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }
    printf("\n");

    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            printf("%d", a[row][col]);
        }
        printf("\n");
    }

    printf("\nMajor diagonal:");
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            if(row==col)
            {
                printf("%d ", a[row][col]);
            }
        }
    }

    printf("\nMinor diagonal:");
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            if(col==size-row-1)
            {
                printf("%d ", a[row][col]);
            }
        }
    }

return 0;

}
