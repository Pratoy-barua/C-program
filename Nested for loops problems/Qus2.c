#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(row=1; row<=n; row++)
    {
        for(col=row; col<=row+n-1; col++)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
