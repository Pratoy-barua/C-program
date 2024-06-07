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
            if(row==col)
            {
                printf("1 ", a[row][col]);
            }
            else
            {
                printf("0 ", a[row][col]);
            }
        }
        printf("\n");
    }
    return 0;
}
