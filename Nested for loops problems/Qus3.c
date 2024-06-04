#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {
        for(col=0; col<row; col++)
        {
            printf("%d", col+row);
        }
        printf("\n");
    }
    return 0;
}
